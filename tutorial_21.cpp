#include <iostream>
#include <set>
using namespace std;

int main() {
    string test = "This is a test iii jj j hgahs aaaGaaaaaaa l o";
    string find = "hello";

    set<char> findLetters;

    for (int i =0; i < find.length(); ++i) {
    	char letter = find[i];
    	findLetters.insert(letter);
    }	
    
   
    for (int i = 0; i < test.length(); ++i) {
    	char letter = test[i];
    	findLetters.erase(letter);
    }


    if (findLetters.size() > 0) {
    	cout << "No! it does not have all letters!"; 
    } else {
    	cout << "YES! It does!";
    }
}