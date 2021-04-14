#include <iostream>
#include <string>

using namespace std;

int main() {
	cout << "Example 1:" << endl;

	for (int i = 0; i < 10 ; i++) {
		if (i % 2 == 0){
			cout << i << endl;
		}
	}
    
    cout << "Example 2:" << endl;
    int x[12];

	for (int i = 0; i < sizeof(x)/sizeof(x[0]); i++) {
		x[i] = i;
	}

	for (int i = 0; i < sizeof(x)/sizeof(x[0]); i++) {
		cout << x[i] << endl;
	}
}


// for (int i = -5; i != -6; i++) this never done