#include <iostream>

auto main() -> int {

    int a{};
    std::cin >> a;

    int b{};
    std::cin >> b;

    for (auto i{a}; i <= b; i++) {
       if (i % 3 == 0) std::cout << "Foo\n";
       else if (i % 2 == 0) std::cout << "Bar\n";
       else std::cout << "Baz\n";
    }

    std::cout << "Explanation\n";
    for (auto i{a}; i <= b; i++) {
       if (i % 3 == 0) std::cout << "* " << i << R"( is multiple of three, hence "Foo")" << '\n';
       else if (i % 2 == 0) std::cout << "* " << i << R"( is even, hence "Bar")" << '\n';
       else std::cout << "* " << i << R"( is odd, hence "Baz")" << '\n';
    }

}