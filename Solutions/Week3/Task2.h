//
// Created by 1nsaneYMD on 10/19/2021.
//

namespace task2 {
    int main() {
        int number, sum = 0;
        for (int i = 0; i < 10; ++i) {
            std::cin >> number;
            if (number >= 10 && number <= 5555)
                sum += number;
        }
        std::cout << sum << std::endl;
        return 0;
    }
}