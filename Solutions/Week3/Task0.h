//
// Created by 1nsaneYMD on 10/19/2021.
//

namespace task0 {
    int main() {
        int number;
        std::cin >> number;
        if (number >= 5 && number <= 20) {
            switch (number % 2) {
                case 0:
                    std::cout << "Number is even!";
                    break;
                case 1:
                    std::cout << "Number is odd!";
                    break;
            }
        } else {
            std::cout << "Number out of interval!" << std::endl;
        }
        return 0;
    }
}