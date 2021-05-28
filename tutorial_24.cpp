#include <iostream>
using namespace std;


void swap(int &x, int &y){
	int temp = x;
	x = y;
	y = temp;
}


void swap_2_option(int *x, int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
}



int main() {
	int a = 2;
	int b = 4;
	int c = 3;
	int d = 5;

	cout << a << endl;
	cout << b << endl;
	cout << "Swapping" << endl;
	swap(a,b);
	cout << a << endl;
	cout << b << endl;

    cout << "Second option" << endl;
    cout << c << endl;
	cout << d << endl;
    swap_2_option(&c,&d);
	cout << c << endl;
	cout << d << endl;
} 
