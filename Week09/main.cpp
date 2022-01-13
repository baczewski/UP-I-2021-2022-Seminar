#include <iostream>

// 1, 2, 3, 4, 2  <- 2

int *findElement(int *arr, int size, int element) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == element)
            return (arr + i);
    }
    return nullptr;
}

int reverse(int number) {
    int reversedNumber = 0;
    while (number != 0) {
        reversedNumber *= 10;
        reversedNumber += number % 10;
        number /= 10;
    }
    return reversedNumber;
}

int modifyNumber(int number, int digit) {
    int modifiedNumber = 0;
    while (number != 0) {
        int lastDigit = (number % 10 + digit) % 10;
        modifiedNumber *= 10;
        modifiedNumber += lastDigit;
        number /= 10;
    }
    return modifiedNumber;
}

// 2 2 3 4 <- 1
//
void removeElements(int arr[], int size, int toRemove) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == toRemove) {
            for (int j = i; j < size - 1; ++j) {
                arr[j] = arr[j + 1];
            }
            --size;
            --i;
        }
    }

    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
}

int findCharArrLength(const char arr[]) {
    int counter = -1;
    while (arr[++counter] != '\0');
    return counter;
}

#define MAX_SIZE 128

bool func(int matrix[MAX_SIZE][MAX_SIZE], int size) {
    int prod1 = 1, prod2 = 1, sum1 = 0, sum2 = 0;
    for (int i = 0; i < size / 2; ++i) {
        prod1 *= matrix[i][i];
    }

    for (int i = 0; i < size / 2; ++i) {
        prod2 *= matrix[size - 1 - i][i];
    }

    bool res = (prod1 + prod2 == sum1 * sum2);
    return res;
}

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// 2,4,5,32,93
void sortElements(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
}

int main() {
    int arr[5] = {93, 32, 4, 2, 5};
    sortElements(arr, 5);
//    int size;
//    int diff = 'a' - '0';
//    char arr1[MAX_SIZE];
//    char arr2[MAX_SIZE];
//    std::cin >> size;
//    for (int i = 0; i < size; ++i) {
//        std::cin >> arr1[i];
//    }
//    for (int i = 0; i < size; ++i) {
//        std::cin >> arr2[i];
//    }
//
//    for (int i = 0; i < size; ++i) {
//        if (arr1[i] >= 'a' && arr1[i] <= 'j'
//            && arr2[i] >= '0' && arr2[i] <= '9') {
//
//            if (arr1[i] - arr2[i] != diff) {
//                std::cout << "No.\n";
//                return -1;
//            }
//        }
//    }
//    std::cout << "Yes.\n";

//    int arr[7] = {1, 1, 1, 1, 2, 3, 1};
//    removeElements(arr, 7, 1);
//    int result = modifyNumber(12975, 4);
//    std::cout << reverse(result);
//    int arr[4] = {1, 2, 3, 2};
//    int *result = findElement(arr, 4, 9);
//    if (result)
//        std::cout << *result;
//    else
//        std::cout << "Didnt find element.";
    return 0;
}