#include <iostream>
#include <ctime>

#define MAX_SIZE 128

/// Task 1 function
//bool matrixSumsEqual(int matrix[MAX_SIZE][MAX_SIZE], int size) {
//    int sumLeftTop = 0, sumRightTop = 0, sumLeftBottom = 0, sumRightBottom = 0;
//    for (int i = 0; i < ((size - 1) / 2); ++i) {
//        sumLeftTop += matrix[i][i];
//    }
//
//    for (int i = 0; i < size - 1; ++i) {
//        sumRightTop += matrix[i][(size - 1) / 2 + 1 + i];
//    }
//
//    for (int i = (size - 1); i > (size - 1) / 2; --i) {
//        sumLeftBottom += matrix[i][i];
//    }
//
//    for (int i = ((size - 1) / 2) + 1; i < size; ++i) {
//        sumRightBottom += matrix[i][i];
//    }
//
//    std::cout << (sumLeftTop) << " " << sumRightBottom << " " << sumLeftBottom << " " << sumRightTop;
//    return false;
//
//}

/// Task 1
int reverseNumber(int number) {
    int reversed = 0;
    while (number != 0) {
        int lastDigit = number % 10;
        reversed *= 10;
        reversed += lastDigit;
        number /= 10;
    }
    return reversed;
}

/// Task 1
int modifyNumber(int number, int digit) {
    int result = 0;
    while (number != 0) {
        int lastDigit = (number % 10 + digit) % 10;
        result *= 10;
        result += lastDigit;
        number /= 10;
    }
    return reverseNumber(result);
}

int hasThreeSameDigits(int number[]) {
    int counter = 1, currentNumber;
    for (int i = 0; i < 5; ++i) {
        counter = 1;
        currentNumber = number[i];
        for (int j = i + 1; j < 5; ++j) {
            if (number[j] == currentNumber)
                counter++;
        }
        if (counter == 3) {
            return currentNumber;
        }
    }
    return 0;
}

void removeElements(int arr[], int size, int k) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == k) {
            for (int j = i; j < size - 1; ++j) {
                arr[j] = arr[j + 1];
            }
            size--;
        }
    }
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
}

int main() {
    /// Task 1
//    int matrix[MAX_SIZE][MAX_SIZE], matrixSize;
//    std::cin >> matrixSize;
//    for (int i = 0; i < matrixSize; ++i) {
//        for (int j = 0; j < matrixSize; ++j) {
//            std::cin >> matrix[i][j];
//        }
//    }
//
//    matrixSumsEqual(matrix, 7);

    /// Task 1
//    int number = 12975;
//    int digit = 4;
//    std::cout << modifyNumber(number, digit);

    /// Task 2
//    srand(time(NULL));
//    int arr[5], foundCounter = 0, rollsCounter = 0;
//    bool foundNumbers[6] = {};
//    while (foundCounter != 6) {
//        // generate 5 dice rolls
//        for (int i = 0; i < 5; ++i) {
//            arr[i] = rand() % 6 + 1;
//        }
//
//        int result = hasThreeSameDigits(arr);
//        if (result != 0 && !foundNumbers[result - 1]) {
//            foundNumbers[result - 1] = true;
//            foundCounter++;
//        }
//
//        for (int i = 0; i < 5; ++i) {
//            std::cout << arr[i];
//        }
//        rollsCounter++;
//        std::cout << std::endl;
//    }
//    std::cout << rollsCounter;

    /// Task 3
    int arr[5] = {3,4,5,23,4};
    removeElements(arr, 5, 4);

    return 0;
}
