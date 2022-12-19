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
    
}