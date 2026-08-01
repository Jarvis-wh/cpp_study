#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> nums;
    int x;
    while (std::cin >> x) nums.push_back(x);
    // Find and print the maximum using std::max_element.
    auto max_it = std::max_element(nums.begin(), nums.end());
    if (max_it != nums.end()) {
        std::cout << *max_it << std::endl;
    } else {    
        std::cout << "No numbers were entered." << std::endl;
    }
    return 0;
}
