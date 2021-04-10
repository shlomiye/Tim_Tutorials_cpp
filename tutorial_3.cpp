#include <iostream>
#include <string>


int main(){
	int n, x;
	std::cin >> n;
	// std::cout << std::cin.fail() << std::endl; // 0 - successed ,1 - failed 
	std::cout << n << std::endl;
	std::cin.clear();
	std::cin.ignore(1000, '\n');
	std::cin >> x;
	std::cout << x;
}