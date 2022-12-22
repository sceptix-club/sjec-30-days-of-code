#include <iostream>

auto main() -> int {
    int n {};
    int m {};
    std::cin >> n >> m;

    auto is1DGrid {n == 1 or m == 1};
    auto isBasicSquareGrid {n == 2 and m == 2};
    auto isOddSquareGrid {n % 2 != 0 and m % 2 != 0};
    std::cout << (is1DGrid or isBasicSquareGrid or isOddSquareGrid ? "No" : "Yes") << '\n';
}
