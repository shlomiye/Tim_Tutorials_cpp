#include <iostream>
 using namespace std;

 int main() {
 	int x = 20;
 	switch (x + 1) {
 		case 1:
 		    cout << "cool";
 		    break;
 		case 2:
 		    cout << "not cool";
 		    break;
 		case 3:
 		    cout << "interesting";
 		    break;        
        default:
            cout << "default";
 	}

 	return 0;
 }