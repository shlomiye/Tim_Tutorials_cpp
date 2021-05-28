#include <iostream>
using namespace std;


int doMath(int x, int y, int z = 1) {
	return (x+y)*z;
}



int main() {
	cout << doMath(3,4) << endl;
	cout << doMath(3,4,2) << endl;
}