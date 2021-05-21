#include <iostream>
#include <map>
using namespace std;

int main() {
	map<char, int> mp = {
		{'T', 7},
		{'S', 8},
		{'a', 4}
	};

	mp['u'] = 9;
	
   
    // for (map<char, int>:: itertor itr = mp.begin(); itr != mp.end; ++itr)
	for (auto itr = mp.begin(); itr != mp.end(); ++itr) {
		cout << (*itr).first << endl;
        cout << itr -> second << endl; 
        // (*itr).second = itr -> second 
	}


	string test = "Hello world my name is shlomi! ttttthhhhaaaa";

	map<char, int> freq;

	for (int i = 0; i < test.length(); ++i){
		char letter = test[i];
		// cout << letter << endl;
		if (freq.find(letter) == freq.end()){ // this letter does not exists in the map
			freq[letter] = 0;
		}

		freq[letter]++;

	}

    for (auto itr = freq.begin(); itr != freq.end(); ++itr){
    	cout << itr -> first << ":" << itr -> second << endl;
    }


}