//
// Created by 1nsaneYMD on 10/19/2021.
//

#include <iomanip>

namespace task6 {
    int main() {
        for (int far = 0; far <= 300; far += 20) {
            double celsius = (far - 32.0) * 5 / 9;
            double kelvin = celsius + 273.15;

            std::cout << far << "\t" << std::fixed << std::setprecision(2) << celsius << "\t";
            std::cout << std::fixed << std::setprecision(2) << kelvin << std::endl;
        }
        return 0;
    }
}