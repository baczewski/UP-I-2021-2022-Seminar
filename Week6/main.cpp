#include <iostream>

// Функция, намираща абсолютната стойност на число
double Abs(double number) {
    return number < 0 ? -number : number;
}

// Функция, която намира число на дадена степен
int Pow(int number, int power) {
    if (power < 0) {
        return -1;
    }
    int result = 1;
    for (int i = 0; i < power; ++i) {
        result = result * number;
    }
    return result;
}

// Функция, която връща по-малкото от 2 числа
double Min(double firstNumber, double secondNumber) {
    if (firstNumber < secondNumber)
        return firstNumber;
    return secondNumber;
}

// Функция, която връща по-голямото от 2 числа
double Max(double firstNumber, double secondNumber) {
    if (firstNumber > secondNumber)
        return firstNumber;
    return secondNumber;
}

// Функция, която връща най-малкото от 3 числа
double MinOfThree(double first, double second, double third) {
    return Min(Min(first, second), third);
}

// Функция, която връща най-голямото от 3 числа
double MaxOfThree(double first, double second, double third) {
    return Max(Max(first, second), third);
}

bool isAlpha(char symbol) {
    return ((symbol >= 'A' && symbol <= 'Z') || (symbol >= 'a' && symbol <= 'z'));
}

bool isDigit(char symbol) {
    return (symbol >= '0' && symbol <= '9');
}

bool isPrime(int number) {
    if (number == 1)
        return false;
    for (int i = 2; i < number; ++i) {
        if (number % i == 0)
            return false;
    }
    return true;
}

bool areSpecial(int number1, int number2) {
    return number1 + 2 == number2;
}

bool areSpecialAndPrimeNumbers(int number1, int number2) {
    if (isPrime(number1) && isPrime(number2) && areSpecial(number1, number2)) {
        return true;
    }
    return false;
}

// Получаваме два параметър - число и цифра, колко пъти се съдържа цифрата в числото
// 12345123 1 -> 2
// 12345 -> 1234 -> 123 -> 12 -> 1 -> 0
unsigned digitsCountInNumber(int number, const int digit) {
    int counter = 0;
    while (number != 0) {
        int lastDigit = number % 10;
        if (lastDigit == digit)
            ++counter;
        number /= 10;
    }
    return counter;
}

int main() {
    // 12345 -> 123 12 1 1234 prefix
    // 12345 -> 2 3 4 23 234 34 infix
    // 12345 -> 5 45 345 2345 postfix
    double x, y;
    std::cin >> x >> y;
    bool isInSquare = (x >= -2 && x <= 2 && y >= -2 && y <= 2);
    bool isInBottomCircle = (x * x + (-2 - y) * (-2 - y) <= 2 * 2);
    bool isInTopCircle = (x * x + (2 - y) * (2 - y) <= 2 * 2);
    bool isIn = ((2 - x) * (2 - x) + y * y <= 2 * 2) && x >= 0 && x <= 2;
    bool isInLeftPart = ((-2 - x) * (-2 - x) + y * y <= 2 * 2) && x >= -2 && x <= 0;
    std::cout << isInSquare << std::endl;
    std::cout << isInBottomCircle << std::endl;
    std::cout << isInTopCircle << std::endl;

//    bool isInFigure = isInSquare && !isInBottomCircle && !isInTopCircle;
//    std::cout << std::boolalpha << isInFigure;
    // Test for abs function
//    std::cout << Abs(-1) << std::endl;
//    std::cout << Abs(0) << std::endl;
//    std::cout << Abs(2) << std::endl;

    // Test for power function
//    std::cout << Pow(2,5) << std::endl;
//    std::cout << Pow(4,0) << std::endl;
//    std::cout << Pow(4,-2) << std::endl;

    // Test for min function
//    std::cout << Min(10,9) << std::endl;
//    std::cout << Min(4,90) << std::endl;
//    std::cout << Min(10,10) << std::endl;

    // Test for max function
//    std::cout << Max(10,9) << std::endl;
//    std::cout << Max(4,90) << std::endl;
//    std::cout << Max(10,10) << std::endl;

    // Test for min of 3
//    std::cout << MinOfThree(1, 2, 3) << std::endl;
//    std::cout << MinOfThree(3, 2, 3) << std::endl;
//    std::cout << MinOfThree(3, 3, 3) << std::endl;

    // Test for max of 3
//    std::cout << MaxOfThree(1, 2, 3) << std::endl;
//    std::cout << MaxOfThree(3, 2, 3) << std::endl;
//    std::cout << MaxOfThree(3, 3, 3) << std::endl;

    // Test for isAlpha function
//    std::cout << isAlpha(2) << std::endl;
//    std::cout << isAlpha('M') << std::endl;
//    std::cout << isAlpha(90) << std::endl;

    // Test for isDigit function
//    std::cout << isDigit('2') << std::endl;
//    std::cout << isDigit('M') << std::endl;
//    std::cout << isDigit(90) << std::endl;

    // Test for isPrime function
//    std::cout << std::boolalpha << isPrime(1) << std::endl;
//    std::cout << std::boolalpha << isPrime(280) << std::endl;
//    std::cout << std::boolalpha << isPrime(7) << std::endl;

    // Test for special sum
//    std::cout << std::boolalpha << areSpecialAndPrimeNumbers(4, 6) << std::endl;
//    std::cout << std::boolalpha << areSpecialAndPrimeNumbers(1, 3) << std::endl;
//    std::cout << std::boolalpha << areSpecialAndPrimeNumbers(5, 7) << std::endl;

//    std::cout << digitsCountInNumber(11111231, 1) << std::endl;
//    std::cout << digitsCountInNumber(11111231, 0) << std::endl;
//    std::cout << digitsCountInNumber(11111231, 2) << std::endl;
    return 0;
}
