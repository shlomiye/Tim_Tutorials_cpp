#include <iostream>
#include <string>
using namespace std;

int main(){
	bool test1 = !(!false || true);
	bool test2 = !!false && !true;
	bool test3 = false && false;

	cout << test1 << endl;
	cout << test2 << endl;
	cout << test3 << endl;

}

/*
!
&&
||
*/