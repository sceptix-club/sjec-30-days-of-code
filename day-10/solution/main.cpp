#include <iostream>
#include <map>
#include <vector>

int countWaysToShareMarbles(int sum);
int countWaysToShareMarbles(int sum, std::vector<int> &soFar,
                                  std::map<std::string, int> &memo);

int main() {
  int sum{};
  std::cin >> sum;

  std::cout << countWaysToShareMarbles(sum) << std::endl;
}

int countWaysToShareMarbles(int sum) {
  std::vector<int> soFar;
  soFar.reserve(5);

  std::map<std::string, int> memo;
  return countWaysToShareMarbles(sum, soFar, memo);
}

int countWaysToShareMarbles(int sum, std::vector<int> &soFar,
                                  std::map<std::string, int> &memo) {
  auto key = std::to_string(sum) + " " + std::to_string(soFar.size());

  if (memo.count(key)) return memo[key];

  if (soFar.size() == 5) {
    if (sum == 0) return 1;
    return 0;
  }

  if (sum <= 0) return 0;

  int count = 0;

  for (int i = 2; i <= sum; ++i) {
    soFar.push_back(i);
    count += countWaysToShareMarbles(sum - i, soFar, memo);
    soFar.pop_back();
  }

  return memo[key] = count;
}
