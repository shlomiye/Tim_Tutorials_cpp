#include <iostream>
using namespace std;


int main() {
    bool test;

    test = 'a' > 'B';
    cout << test << endl;

	int num1, num2;
	cout << "Type a number: ";
	cin >> num1;
	cout << "Type  a number: ";
	cin >> num2;
	cout << "These two numbers are the same: " << (num1==num2) << endl;
}