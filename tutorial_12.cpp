#include <iostream>
#include <string>
using namespace std;


int main(){
	string str = "Hello World!";
	cout << str << endl;

	for (int i = 0; i < str.length(); i++){
		cout << str[i] << endl;
	}
    
    cout << endl;

	for (int i = 0; i < str.size(); i++){
		cout << str[i] << endl;
	}
	return 0;
} 