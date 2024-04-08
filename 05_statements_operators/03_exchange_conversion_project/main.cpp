#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <string>
#include <curl/curl.h>
#include <nlohmann/json.hpp>

#define CURL_STATICLIB

using json = nlohmann::json;
using namespace std;

// Create two columns where right justify label and left justified values.
const int COLMFT1 = 35;
const int COLMFT2 = 15;

struct Conversion {

    string base_currency;
    double quote;
    string quote_currency;
    string requested_time;
    long int timestamp;
    double total;

};

// Callback function for writing data received from server
size_t WriteCallback(void* contents, size_t size, size_t nmemb, string* userp) {

    userp->append((char*)contents, size * nmemb);

    return size * nmemb;

};

// Function to tell nlohmann::json how to convert a JSON object into a Conversion struct
void from_json(const json& j, Conversion& p) {

    j.at("base_currency").get_to(p.base_currency);
    j.at("quote").get_to(p.quote);
    j.at("quote_currency").get_to(p.quote_currency);
    j.at("requested_time").get_to(p.requested_time);
    j.at("timestamp").get_to(p.timestamp);
    j.at("total").get_to(p.total);

};

int main() {

    double brl_value;
    int option;
    string currency;

    // Application header to welcome the user
    cout << "Welcome to C++ Currency Converter" << endl;
    cout << "--------------------------------------------------------------------------------------" << endl;
    cout << endl;

    // Format Real numbers
    cout << fixed << setprecision(2);

    // Prompt user input
    cout << setw(COLMFT1) << left << "Enter a value (BRL): ";
    cin >> brl_value;

    do {

        cout << setw(COLMFT1) << left << "Select a currency to convert (1.EUR | 2.USD | 3.ARS): ";
        cin >> option;
        cout << endl;

    } while (option < 1 || option > 3);

    // Currency code
    switch (option) {
        case 1:
            currency = { "EUR" };
            break;
        case 2:
            currency = { "USD" };
            break;
        case 3:
            currency = { "ARS" };
            break;

    };

    // Show User input
    cout << setw(COLMFT1) << left << "BRL: ";
    cout << setw(COLMFT1) << right << brl_value << endl;

    // Variable to hold cURL operation results
    CURL *curl;
    CURLcode res;
    string readBuffer;

    curl = curl_easy_init();

    // Global cURL Initialization
    curl_global_init(CURL_GLOBAL_DEFAULT);

    // Initialize the cURL Handle
    string url = "https://marketdata.tradermade.com/api/v1/convert?api_key=hE2NItimW2DH0HmZNL8v&from=BRL&to=" + currency + "&amount=10";

    // Enable Following HTTP Redirects
    curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);

    // Set the Target URL
    curl_easy_setopt(curl, CURLOPT_URL, url.c_str());

    // Writing Function
    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);

    // Writing Data
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, &readBuffer);

    // Perform the HTTP Request
    res = curl_easy_perform(curl);

    // Cleanup cURL Resources
    curl_easy_cleanup(curl);

    // Check for Errors
    if (res == CURLE_OK) {

        auto json_response = json::parse(readBuffer);

        // Convert the JSON object to CurrencyDetails struct
        Conversion con = json_response.get<Conversion>();

        // Convertion rate
        cout << setw(COLMFT1) << left << "Conversion rate (per BRL): ";
        cout << setw(COLMFT1) << right << con.quote << endl;

        // Converted currency
        cout << setw(COLMFT1) << left << currency << ": ";
        cout << setw(COLMFT1) << right << con.quote * brl_value << endl;

        // Closing statement to the application
        cout << "\n--------------------------------------------------------------------------------------" << endl;
        cout << "\nEnd of Rate Converter" << endl;

    } else {

        cerr << "curl_easy_perform() failed: " << curl_easy_strerror(res) << endl;
    
    };

    // Cleanup Global cURL resources.
    curl_global_cleanup();

    return 0;

};
