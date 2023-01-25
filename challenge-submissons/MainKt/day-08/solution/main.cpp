#include <iostream>
#include <vector>
#include <numeric>

std::vector<int> getPrimesBetween(int, int);

int main() {
  int m{};
  std::cin >> m;

  int n{};
  std::cin >> n;

  auto primes = getPrimesBetween(m, n);
  std::vector<int> diffs;
  std::adjacent_difference(
      primes.begin(),
      primes.end(),
      std::back_inserter(diffs),
      [](auto b, auto a) {
        auto count = b - a - 1;
        std::cout << a << " - " << b << " : " << count << '\n';
        return count;
      }
    );
}

std::vector<int> getPrimesBetween(int m, int n) {
  auto isPrime = [](auto n) {
    if (n <= 1) return false;

    for (auto i = 2; i * i <= n; ++i) {
      if (n % i == 0) return false;
    }

    return true;
  };

  std::vector<int> primes;
  for (auto i = m; i <= n; ++i) {
    if (isPrime(i)) primes.push_back(i);
  }

  return primes;
}
