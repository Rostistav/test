#include <iostream>

int main(){

    int number;

    std::cout << "Enter number 1 or 0" << std::endl;
    std::cin >> number;

    if (number == 1) {
      std::cout << "This is true";
    } else if  (number == 0) {
      std::cout << "This is false";
    } else {
      std::cout << "These are not numbers 1 or 0";
    }
        return 0;
}
