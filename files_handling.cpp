#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main(){
	fstream myFile;
    myFile.open("shlomi_test.txt", ios::out); // write
    if (myFile.is_open()) {
    	myFile << "Hello\n";
    	myFile << "This is second line\n";
    	myFile.close();
    }

    myFile.open("shlomi_test.txt", ios::app); // append
    if (myFile.is_open()) {
    	myFile << "Hello2\n";
    	myFile.close();
    }

    fstream myFile2;
    myFile2.open("shlomi_test_2.txt", ios::in); // read
    if (myFile2.is_open()){
        string line;
        while(getline(myFile2,line)) {
            cout << line << endl;
        }
        myFile2.close();
    }
    return 0;
}