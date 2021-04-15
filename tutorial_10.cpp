#include <iostream>
#include <string>

using namespace std;

int main() {
    int input = -1;
    while(true) {
    	cout << "Type the number 1 or 2: ";
    	cin >> input;
    	if (input == 1 || input ==2){
    		break;
    	}
    }

    int x = 10;
    do {
    	int add;
    	cout << "Type a number to add to x: ";
    	cin >> add;
    	x += add;
    	cout << "x is: " << x << endl;
    } while (x < 10);

	return 0;
}