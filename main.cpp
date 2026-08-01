#include <iostream>
#include <unordered_set>
#include <string>
#include <sstream>

int main() {
    std::string line;
    std::getline(std::cin, line);
    std::unordered_set<std::string> seen;
    std::istringstream iss(line);
    std::string word;
    while (iss >> word) seen.insert(word);
    // Print seen.size().
    std::cout << seen.size() << std::endl;
    return 0;
}
