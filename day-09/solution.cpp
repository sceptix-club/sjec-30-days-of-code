#include <iostream>
#include <vector>
#include <cmath>

auto generatePattern(int n) {
  auto length = 2 * n - 1;
  auto middle = std::round(length / 2);
  std::vector<std::string> pattern;

  for (int i = 0, p = middle; i < length; i++, p += i <= middle ? -1 : 1) {
    auto line = std::string(length, ' ');

    for (int j = p; j <= middle; j += 2) {
      auto complementaryIndex = length - 1 - j;
      line.at(j) = line.at(complementaryIndex) = '#';
    }

    pattern.push_back(line);
  }

  return pattern;
}

int main() {
  int n{};
  std::cin >> n;

  auto pattern = generatePattern(n);

  for (auto const& line: pattern) {
    std::cout << line << '\n';
  }
}
