#include <iostream>
#include <tuple>
using namespace std;

int main() {
	cout << "\nexample_1:" << endl;
	tuple <int, string> person(20, "Shlomi");  
	cout << get<0>(person) << endl;
	get<1>(person) = "Billy";
	cout << get<1>(person) << endl;
    
    cout << "\nexample_2:" << endl;
    tuple <int, char, bool, float> thing;
    thing = make_tuple(23, 'H', true, 334.5);
    cout << get<0>(thing) << endl; 
    cout << get<1>(thing) << endl; 
    cout << get<2>(thing) << endl; 
    cout << get<3>(thing) << endl;

    cout << "\nexample_3:" << endl;
    tuple <int, char, bool, float> thing2 = make_tuple(56, 'L', false, 66.7);
    cout << get<0>(thing2) << endl; 
    cout << get<1>(thing2) << endl; 
    cout << get<2>(thing2) << endl; 
    cout << get<3>(thing2) << endl;

    cout << "\nexample_4:" << endl;
    tuple <int, int> t1(1,2);
    tuple <int, int> t2(3,4);

    cout << get<0>(t1) << endl; 
    cout << get<1>(t1) << endl; 
    cout << get<0>(t2) << endl; 
    cout << get<1>(t2) << endl << endl;

    t1.swap(t2);

    cout << get<0>(t1) << endl; 
    cout << get<1>(t1) << endl; 
    cout << get<0>(t2) << endl; 
    cout << get<1>(t2) << endl << endl;

    cout << "\nexample_5:" << endl;

    tuple <int, int > t3 = make_tuple(88,32);
    int x, y;

    tie(x, y) = t3;

    cout << x << endl;
    cout << y << endl;
    cout << get<0>(t3) << endl; 
    cout << get<1>(t3) << endl << endl; 

    cout << "\nexample_6:" << endl;
    tuple <int, char> t4(45, 'G');
    tuple <char, string> t5('D', "Hello World!");
    tuple <int, char, char, string> t6 = tuple_cat(t4,t5);
    // auto t6 = tuple_cat(t4, t5);

    cout << get<0>(t6) << endl; 
    cout << get<1>(t6) << endl; 
    cout << get<2>(t6) << endl; 
    cout << get<3>(t6) << endl << endl;



	return 0;
} 