#include <iostream>

unsigned Abs(int number);

unsigned Pow(int number, int power);

int Min(int firstNumber, int secondNumber);

int Max(int firstNumber, int secondNumber);

int MinOfThree(int firstNumber, int secondNumber, int thirdNumber);

int MaxOfThree(int firstNumber, int secondNumber, int thirdNumber);

bool isAlpha(char symbol);

bool isDigit(char symbol);

// За да бъде просто едно число, то трябва да се дели само на 1 и на себе си
// В случая ще считаме, че 1 е просто число
bool isPrime(int number);

// Функция, проверяваща дали е изпълнено следното равенство A + 2 = B, където A и B са прости числа
bool areNumbersPrimeAndSpecial(int firstNumber, int secondNumber);

int main() {
    // Test for abs function
    std::cout << Abs(-2) << std::endl;
    std::cout << Abs(0) << std::endl;
    std::cout << Abs(3) << std::endl;

    // Test for pow function
    std::cout << Pow(10, 3) << std::endl;
    std::cout << Pow(10, 0) << std::endl;

    // Test for min function
    std::cout << Min(10, 12) << std::endl;
    std::cout << Min(7, 7) << std::endl;
    std::cout << Min(33, 10) << std::endl;

    // Test for max function
    std::cout << Max(10, 12) << std::endl;
    std::cout << Max(7, 7) << std::endl;
    std::cout << Max(33, 10) << std::endl;

    // Test for min of three function
    std::cout << MinOfThree(1, 2, 3) << std::endl;
    std::cout << MinOfThree(2, 4, 3) << std::endl;
    std::cout << MinOfThree(10, 10, 7) << std::endl;

    // Test for max of three function
    std::cout << MaxOfThree(1, 2, 3) << std::endl;
    std::cout << MaxOfThree(2, 4, 3) << std::endl;
    std::cout << MaxOfThree(10, 10, 7) << std::endl;

    // Test for is alpha function
    std::cout << std::boolalpha << isAlpha('a') << std::endl;
    std::cout << std::boolalpha << isAlpha('M') << std::endl;
    std::cout << std::boolalpha << isAlpha('0') << std::endl;

    // Test for is digit function
    std::cout << std::boolalpha << isDigit('a') << std::endl;
    std::cout << std::boolalpha << isDigit('M') << std::endl;
    std::cout << std::boolalpha << isDigit('0') << std::endl;

    // Test for is prime function
    std::cout << std::boolalpha << isPrime(10) << std::endl;
    std::cout << std::boolalpha << isPrime(1) << std::endl;
    std::cout << std::boolalpha << isPrime(19) << std::endl;

    // Test for are prime and special function
    std::cout << std::boolalpha << areNumbersPrimeAndSpecial(3, 5) << std::endl;
    std::cout << std::boolalpha << areNumbersPrimeAndSpecial(5, 7) << std::endl;
    std::cout << std::boolalpha << areNumbersPrimeAndSpecial(13, 15) << std::endl;
    return 0;
}

unsigned Abs(const int number) {
    return number < 0 ? -number : number;
}

unsigned Pow(const int number, const int power) {
    int resultNumber = 1;
    for (int i = 0; i < power; ++i, resultNumber *= number);
    return resultNumber;
}

int Min(const int firstNumber, const int secondNumber) {
    return firstNumber < secondNumber ? firstNumber : secondNumber;
}

int Max(const int firstNumber, const int secondNumber) {
    return firstNumber > secondNumber ? firstNumber : secondNumber;
}

int MinOfThree(const int firstNumber, const int secondNumber, const int thirdNumber) {
    return Min(Min(firstNumber, secondNumber), thirdNumber);
}

int MaxOfThree(const int firstNumber, const int secondNumber, const int thirdNumber) {
    return Max(Max(firstNumber, secondNumber), thirdNumber);
}

bool isAlpha(const char symbol) {
    return (symbol >= 'A' && symbol <= 'Z') || (symbol >= 'a' && symbol <= 'z');
}

bool isDigit(const char symbol) {
    return symbol >= '0' && symbol <= '9';
}

bool isPrime(const int number) {
    for (int i = 2; i < number; ++i) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

bool areNumbersPrimeAndSpecial(const int firstNumber, const int secondNumber) {
    return isPrime(firstNumber) && isPrime(secondNumber) && (firstNumber + 2 == secondNumber);
}