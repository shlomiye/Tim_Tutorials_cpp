#include <iostream>
using namespace std;


pair<int, int> makePair(int x, int y) {
	if (x > y) {
	    return pair<int, int> (x,y);
	}
	return pair<int, int> (y,x);
}


int main() {
	cout << makePair(2,3).first << endl;
    cout << makePair(2,3).second << endl;
}