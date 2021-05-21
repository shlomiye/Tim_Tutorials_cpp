#include <iostream>
#include <map>
using namespace std;

int main() {
	map<char, int> mp = {
		{'T',7},
		{'S', 8},
		{'a', 4}
	};
    mp['u'] = 9;

    mp.insert(pair<char, int>('j', 5));

    pair<char, int> p1('L', 8);
    mp.insert(p1);

    cout << "map size:" << mp.size() << endl;
    
    cout << "empty:" << mp.empty() << endl;

    // mp.erase(p1.first);
    cout << mp['L'] << endl;
	cout << mp['T'] << endl;
	cout << mp['u'] << endl;
	cout << mp['j'] << endl;
	cout << mp['b'] << endl;
   

	cout << p1.first << endl;
	cout << p1.second<< endl;


	mp.clear();
	cout << mp['T'] << endl;
	cout << "empty:" << mp.empty() << endl;
    mp.clear();
	cout << "empty:" << mp.empty() << endl;
	return 0;
}