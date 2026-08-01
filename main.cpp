#include <iostream>
#include <string>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;

    if(n%15 == 0) {
        std::cout << "FizzBuzz" << std::endl;
    } else if(n%3 == 0) {
        std::cout << "Fizz" << std::endl;
    } else if(n%5 == 0) {
        std::cout << "Buzz" << std::endl;
    } else {
        std::cout << n << std::endl;
    }
    return 0;
}
