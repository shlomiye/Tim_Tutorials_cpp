#include <iostream>
#include <vector>

int main() {
    std::vector<int> v1 = {1, 2, 3,4};
    std::cout << v1[1] << std::endl;
    std::cout << "front: " << v1.front() << std::endl;
    std::cout << "back: " << v1.back()<< std::endl;
    std::cout << "size: " << v1.size()<< std::endl;
    std::cout << "capacity: " << v1.capacity()<< std::endl;
    v1.push_back(9);
    std::cout << "size: " << v1.size()<< std::endl;
    std::cout << "capacity: " << v1.capacity()<< std::endl;
    v1.push_back(9);
    v1.push_back(9);
    v1.push_back(9);
    v1.push_back(9);
    std::cout << "size: " << v1.size()<< std::endl;
    std::cout << "capacity: " << v1.capacity()<< std::endl;

    v1.pop_back();
    v1.pop_back();
    v1.pop_back();
    v1.pop_back();
    v1.pop_back();

    std::cout << "back: " << v1.back()<< std::endl;
    std::cout << "size: " << v1.size()<< std::endl;
    std::cout << "capacity: " << v1.capacity()<< std::endl;

    // capacity only increase so..

    v1.shrink_to_fit();
    std::cout << "size: " << v1.size()<< std::endl;
    std::cout << "capacity: " << v1.capacity()<< std::endl;




    return 0;
}