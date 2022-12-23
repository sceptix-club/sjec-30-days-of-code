#include <iostream>

auto main() -> int {
    int n {};
    int m {};
    std::cin >> n >> m;

    /*
        Assuming grids filled
            |*|*|*|+| ,  |*|*|*|*|+|
            |*|+|+|+| ,  |*|+|+|+|+| ,  ...
        are also valid
    */
   
    auto is1DGrid {n == 1 or m == 1};
    auto is2x2Grid {n == 2 and m == 2};
    auto isOddxOddGrid {n % 2 != 0 and m % 2 != 0};
    std::cout << (is1DGrid or is2x2Grid or isOddxOddGrid ? "No" : "Yes") << '\n';

}
