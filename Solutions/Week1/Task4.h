//
// Created by 1nsaneYMD on 10/19/2021.
//

#include <iostream>
#include <cmath>

namespace task4 {
    int main() {
        double width, height;
        const int paint = 3;
        std::cin >> width >> height;
        double square_roots_to_be_painted = 4 * width * height;
        std::cout << ceil(square_roots_to_be_painted / paint) << std::endl;
        return 0;
    }
}