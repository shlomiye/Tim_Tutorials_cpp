#include <iostream>
#include <vector>

int main() {
    std::vector<int> v1 = {1, 2, 3,4};
    v1.insert(v1.begin(), 5);
    v1.insert(v1.begin() + 1, 8);
    std::cout << v1[0] << std::endl;
    std::cout << v1[1] << std::endl;
    std::cout << v1[2] << std::endl;
    std::cout << v1.back() << std::endl;
    v1.erase(v1.begin() + 5);
    std::cout << v1.back() << std::endl;
    
    std::cout << "-----------------------------------------------------------" << std::endl;
    for (int i =0; i < v1.size(); ++i) {
    	std::cout << v1[i] << std::endl;
    }
    
    std::cout << "-----------------------------------------------------------" << std::endl;

    for (auto itr = v1.begin(); itr != v1.end(); ++itr){
    	std::cout << *itr << std::endl;
    }

    return 0;
}    
