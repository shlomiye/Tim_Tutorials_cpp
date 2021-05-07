#include <iostream>
#include <string>
using namespace std;

// references

int main(){
	int a = 2;
	int &b = a;
	int &c = b;
	c = 3;
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
    cout << endl;
    cout << &a << endl;
	cout << &b << endl;
}