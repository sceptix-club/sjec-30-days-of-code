#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>

auto main() -> int {

    int n{};
    std::cin >> n;

    std::ostringstream sout;
    for (auto i{0}; i < n; i++) {

        std::vector<int> triangle(3);
        for (auto &side : triangle) std::cin >> side;
        std::sort(triangle.begin(), triangle.end());

        if (i % 3 == 0) {
            sout << triangle.front() << '\n';
        } else if (i % 3 == 1) {
            sout << triangle.at(1) << '\n';
        } else {
            sout << triangle.back() << '\n';
        }

    }
    std::cout << sout.str();

}