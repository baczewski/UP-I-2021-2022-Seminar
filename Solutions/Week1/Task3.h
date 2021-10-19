//
// Created by 1nsaneYMD on 10/19/2021.
//

#include <iostream>

namespace task3 {
    int main() {
        int firstNumber, secondNumber;
        std::cin >> firstNumber >> secondNumber;
        int sum = firstNumber + secondNumber;
        int diff = firstNumber - secondNumber;
        int product = firstNumber * secondNumber;
        std::cout << "Sum: " << sum << "\nDifference: " << diff << "\nProduct: " << product << std::endl;
        return 0;
    }
}