#include <iostream>
#include <string>
#include <vector>

using namespace std;

void double_data(int* int_ptr);
void swap(int* a, int* b);
void display(const vector<string>* const  v);

int main() {

	int value{ 10 };
	int* int_ptr{ nullptr };

	cout << "Value: " << value << endl;
	double_data(&value);
	cout << "Value: " << value << endl;

	cout << "\n----------------------" << endl << endl;
	
	int_ptr = &value;
	double_data(int_ptr);
	cout << "Value: " << value << endl;

	cout << "\n----------------------" << endl << endl;

	int x{ 100 }, y{ 200 };
	cout << "x: " << x << endl;
	cout << "y: " << y << endl;

	swap(&x, &y);

	cout << "\nx: " << x << endl;
	cout << "y: " << y << endl;

	cout << "\n----------------------" << endl << endl;
    vector<string> stooges {"Larry", "Moe", "Curly"};
    display(&stooges);

	return 0;
}

void double_data(int* int_ptr) {

	*int_ptr *= 2;

}

void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void display(const vector<string>* const  v) {
	//(*v).at(0) = "Funny";
	for (auto str : *v)
		cout << str << " ";
	cout << endl;

	//   v = nullptr;
}
