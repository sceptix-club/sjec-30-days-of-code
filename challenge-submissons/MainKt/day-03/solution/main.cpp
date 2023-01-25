#include <iostream>
#include <vector>
#include <ranges>
#include <numeric>

auto main() -> int {

    int n{};
    std::cin >> n;

    std::vector<double> numbers(n);
    for (auto &number : numbers) std::cin >> number;

    auto const average{
        std::reduce(numbers.begin(), numbers.end()) / n
    };

    for (auto const number : std::views::all(numbers)
                           | std::views::filter([&](double i) { return i > average; })) {
        std::cout << number << ' ';
    }
    std::cout << '\n';

}