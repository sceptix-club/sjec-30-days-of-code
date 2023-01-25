#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  int n{};
  std::cin >> n;

  std::vector<double> frames(n);
  for (auto& frame : frames) std::cin >> frame;

  std::vector<double> compressedFrames;
  std::copy_if(
    begin(frames),
    end(frames),
    back_inserter(compressedFrames),
    [&](auto frame) {
      return compressedFrames.empty() or compressedFrames.back() != frame;
    }
  );

  for (auto frame : compressedFrames) std::cout << frame << ' ';
  std::cout << '\n';
}
