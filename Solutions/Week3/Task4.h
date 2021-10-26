//
// Created by 1nsaneYMD on 10/19/2021.
//
namespace task4 {
    int main() {
        int n, res = 1;
        std::cin >> n;
        for (int i = 1; i <= n; ++i) {
            res *= i;
        }
        std::cout << n << "! = " << res << std::endl;
        return 0;
    }
}