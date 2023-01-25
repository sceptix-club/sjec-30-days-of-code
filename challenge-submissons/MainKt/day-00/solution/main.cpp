#include <iostream>
#include <algorithm>

auto main() -> int {

    auto name = std::string();
    std::cout << "Name: ";
    std::getline(std::cin, name);
    name.erase(std::remove_if(name.begin(), name.end(), ::isspace), name.end());

    if (name.empty()) std::cout << "Hello, SJEC!\n";
    else std::cout << "Hello, " << name << "!\n";

}
