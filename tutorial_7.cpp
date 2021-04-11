#include <iostream>

int main() {
	int x;
	std::cin >> x;
	if (x == 10 || x == 9){
		std::cout << "This is my fav number!" << std::endl;
	} else if (x < 5) {
		std::cout << "x is less than 5" << std::endl;
	} else if (x == 10) {
		std::cout << "x is equals to 10" << std::endl;
	} else {
		std::cout << "This is NOT my fav number!" << std::endl;
	}

}