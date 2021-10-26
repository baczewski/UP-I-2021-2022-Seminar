//
// Created by 1nsaneYMD on 10/19/2021.
//
namespace task5 {
    int main() {
        unsigned int n;
        char a, b;
        std::cin >> n >> a >> b;

        for (int i = 1; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (j < i)
                    std::cout << a;
                else
                    std::cout << b;
            }
            std::cout << std::endl;
        }
        return 0;
    }
}