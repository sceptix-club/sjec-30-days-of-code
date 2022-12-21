#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

auto main() -> int {

    int n{};
    std::cin >> n;

    std::vector<int> numbers(n);
    for (auto &number : numbers) std::cin >> number;

    auto const average{
        std::reduce(numbers.begin(), numbers.end()) / static_cast<int>(numbers.size())
    };

    std::vector<int> filtered;
    std::copy_if(
        numbers.begin(), 
        numbers.end(),
        std::back_inserter(filtered),
        [&](int i) { return i > average; }
    );

    for (auto const number : filtered) std::cout << number << ' ';
    std::cout << '\n';

}