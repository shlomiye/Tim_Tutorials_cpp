#include <iostream>
using namespace std;

int main(){
	int x = 2;
	int *y = &x;
	cout << &x << endl;
	cout << y << endl;
	cout << &y << endl;
	cout << *y << endl << endl;
    
    cout << "array example:" << endl;

	int arr[] = {1, 2, 3};
	int *head = arr;

    // cout << arr << endl;
    // cout << arr[0] << endl;

	for (int i = 0; i < 3; ++i){
		// head = &arr[0] + i;
		head = arr + i;
	    cout << *head << endl;	
	}
	
}