#include <iostream>
#include <cmath>

int power(int n, int p) {
    int currentResult = 1;
    for (int i = 0; i < p; ++i) {
        currentResult = currentResult * n;
    }
    return currentResult;
}

int main() {
    // Сбор на всички числа до срещане на 0
//    int inputNumber, sum = 0;
//    std::cin >> inputNumber;
//
//    while (inputNumber != 0) {
//        sum = sum + inputNumber;
//        std::cin >> inputNumber;
//    }
//
//    std::cout << sum;

    // Сбор на всички числа до срещане на 0
//    int numbersCount, sum = 0;
//    bool flag = true;
//    std::cin >> numbersCount;
//
//    for (int i = 0; i < numbersCount; ++i) {
//        int currentNumber;
//        std::cin >> currentNumber;
//        if (currentNumber == 0) {
//            flag = false;
//        }
//        if (flag) {
//            sum += currentNumber;
//        }
//    }
//    std::cout << sum << "\n";

//    for (int i = 0; i < numbersCount; ++i) {
//        int currentNumber;
//        std::cin >> currentNumber;
//        if (currentNumber == 0) {
//            std::cout << sum;
//            break;
//        }
//        sum = sum + currentNumber;
//    }



    // Геометрична прогресия 1 + a + a^2 + ... + a^n
//    int a, n, sum = 1;
//    std::cin >> a >> n;
//    for (int i = 1; i <= n; ++i) {
//        // ^ - XOR
//        sum = sum + (int) pow(a, i);
//        // power (число, степен)
//    }
//    std::cout << sum;

//    int number, p;
//    std::cin >> number >> p;
//
//    int result = power(number, p);
//    std::cout << result;

//    int n, currentNumber = 1;
//    std::cin >> n;
//    while (currentNumber * currentNumber <= n) {
//        std::cout << pow(currentNumber, 2);
//        // && || ! * + - /
//        std::cout << currentNumber * currentNumber << " ";
//        ++currentNumber;
//    }

    // Само нечетни числа
//    int numberCount;
//    std::cin >> numberCount;
//    for (int i = 0; i < numberCount; ++i) {
//        int currentNumber;
//        std::cin >> currentNumber;
//        if (currentNumber % 2 == 0) {
//            std::cout << "NO\n";
//            // Излизаме от функцията main
//            return 0;
//        }
//    }
//    std::cout << "YES";

//    int numbersCount;
//    bool flag = true;
//    std::cin >> numbersCount;
//    for (int i = 0; i < numbersCount; ++i) {
//        int currentNumber;
//        std::cin >> currentNumber;
//        if (currentNumber % 2 == 0) {
//            flag = false;
//            break;
//        }
//    }
//    std::cout << (!flag ? "NO" : "YES");

// 36256136326 -> 6
// 3625613632 -> 2
// ...
// 362561 -> 1
//    int number;
//    std::cin >> number;
//    while (number != 0) {
//        int lastDigit = number % 10;
//        if (lastDigit == 1) {
//            std::cout << "YES";
//            break;
//        }
//        number = number / 10;
//    }

//    // Просто число
//    int number;
//    bool flag = true;
//    std::cin >> number;
//    // 1, себе си, ...
//    for (int i = 2; i < number; ++i) {
//        if (number % i == 0) {
//            // Съставно
//            flag = false;
//            break;
//        }
//    }
//
//    if (flag) {
//        std::cout << "Prime\n";
//    }
//    else {
//        std::cout << "Not Prime\n";
//    }

    // (((2))), (((3))), (4), (((5))), ((6)), 7, (8), ((9)), ((10))
//    int n;
//    std::cin >> n;
//    for (int currentNumber = 2; currentNumber <= n; ++currentNumber) {
//        bool flag = true;
//        for (int currentDenominator = 2; currentDenominator < currentNumber; ++currentDenominator) {
//            if (currentNumber % currentDenominator == 0) {
//                flag = false;
//                break;
//            }
//        }
//        if (flag) {
//            std::cout << currentNumber << " ";
//        }
//    }

//    int n;
//    do {
//        std::cout << "Number: ";
//        std::cin >> n;
//
//    } while (n <= 0);
//
//    for (int i = 2; n != 0; ++i) {
//        bool flag = true;
//        for (int j = 2; j < i; ++j) {
//            if (i % j == 0) {
//                flag = false;
//                break;
//            }
//        }
//        if (flag) {
//            std::cout << i << " ";
//            --n;
//        }
//    }

    // 3.00
    // Булев израз (bool)
    // Математически операции

    // Двоично представяне на число
    // Цикли
    return 0;
}
