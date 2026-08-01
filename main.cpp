#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<long long> nums;
    long long x;
    while (std::cin >> x) nums.push_back(x);
    // Filter evens, square, sum, and print.
    long long sum = std::accumulate(nums.begin(), nums.end(), 0LL, [](long long acc, long long n) {
        if (n % 2 == 0) {
            return acc + n * n;
        }
        return acc;
    });
    std::cout << sum << std::endl;
    return 0;
}
