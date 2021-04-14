#include <iostream>
#include <string>

using namespace std;

int main() {
	int arr [5]  = {452222, 3, 4, 5, 6};
	string arr2[] {"Shlomi", "Hadas", "Yehezkel"};
	cout << arr[2] << endl;
	cout << arr2[1] << endl;
    cout <<"The number of elements is: "<< sizeof(arr)/sizeof(arr[0]) << endl;
	return 0;

}