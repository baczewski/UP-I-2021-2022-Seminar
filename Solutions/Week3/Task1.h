//
// Created by 1nsaneYMD on 10/19/2021.
//

namespace task1 {
    int main() {
        int number;
        std::cin >> number;
        if (number >= 100 && number <= 999) {
            int first_digit = (number / 100) % 10;
            int second_digit = (number / 10) % 10;
            int third_digit = number % 10;

            int multiplication = first_digit * second_digit * third_digit;
            if (multiplication >= 100 && multiplication <= 999)
                std::cout << "YES " << multiplication - (first_digit + second_digit + third_digit) << std::endl;
            else
                std::cout << "NO " << multiplication << std::endl;
        } else {
            std::cout << "Not a 3 digit number!" << std::endl;
        }
        return 0;
    }
}