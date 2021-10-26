//
// Created by 1nsaneYMD on 10/19/2021.
//

namespace task3 {
    int main() {
        int n, number, current_biggest_negative = 0;
        std::cin >> n;
        for (int i = 0; i < n; ++i) {
            std::cin >> number;
            if (number < 0) {
                if (current_biggest_negative == 0 || number > current_biggest_negative)
                    current_biggest_negative = number;
            }
        }
        std::cout << current_biggest_negative << std::endl;
        return 0;
    }
}