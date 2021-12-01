#include <iostream>

/// Task 0 function
void swap(int *firstNumber, int *secondNumber) {
    *firstNumber = *firstNumber + *secondNumber;
    *secondNumber = *firstNumber - *secondNumber;
    *firstNumber = *firstNumber - *secondNumber;
}

/// Task 1 function
void reverseArrayPointer(int *arr, unsigned size) {
    for (int i = 0; i < size / 2; ++i) {
        int tempValue = *(arr + i);
        *(arr + i) = *(arr + size - i - 1);
        *(arr + size - i - 1) = tempValue;
    }
}

/// Task 2 function
int *pointerToFirstOccurrenceInArray(int *arr, unsigned size, int element) {
    for (int i = 0; i < size; ++i) {
        if (*(arr + i) == element) {
            return (arr + i);
        }
    }
    return nullptr;
}

/// Task 3 function
void sortArraysInThirdArray(int *arr, int *other, int arrSize, int otherSize, int result[100]) {
    int i = 0, j = 0, k = 0;
    while (k < arrSize + otherSize) {
        if (j == otherSize) {
            result[k++] = arr[i++];
            continue;
        }
        if (i == arrSize) {
            result[k++] = other[j++];
            continue;
        }
        if (arr[i] > other[j]) {
            result[k++] = other[j++];
            continue;
        } else {
            result[k++] = arr[i++];
        }
    }
    for (int l = 0; l < arrSize + otherSize; ++l) {
        std::cout << result[l];
    }
}

/// Task 4 function
int *minSumElementsInArray(int *arr, int *other, int sizeArr, int sizeOther) {
    int *ptr = nullptr;
    int sum = 0, secondSum = 0;
    for (int i = 0; i < sizeArr; ++i) {
        sum += *(arr + i);
    }

    for (int i = 0; i < sizeOther; ++i) {
        secondSum += *(other + i);
    }
    if (sum < secondSum) {
        ptr = arr;
    } else {
        ptr = other;
    }
    return ptr;
}


int main() {
    /// Task 0 tests
//    int firstNumber = 20, secondNumber = 30;
//    swap(&firstNumber, &secondNumber);
//    std::cout << firstNumber << " " << secondNumber << std::endl;

    /// Task 1 tests
//    int arr[5] = {1, 2, 3, 4, 5};
//    reverseArrayPointer(arr, 5);
//    for (int i = 0; i < 5; ++i) {
//        std::cout << arr[i] << " ";
//    }

    /// Task 2 tests
//    int arr[5] = {1, 2, 3, 4, 1};
//    int *elementFound = pointerToFirstOccurrenceInArray(arr, 5, 4);
//    if (elementFound != nullptr) {
//        std::cout << *elementFound << std::endl;
//    } else {
//        std::cout << "Did not find element." << std::endl;
//    }

    /// Task 3 tests
//    int arr[] = {1,1,2,3,4,4,6,6};
//    int other[] = {1,1,1,2,7,8,8,8};
//    int res[100];
//    sortArraysInThirdArray(arr, other, 8,8,res);

    /// Task 4 tests
    int arr[] = {1, 1, 2, 3, 4, 4, 6, 633};
    int other[] = {1, 1, 1, 2, 7, 8, 8, 8};
    int *ptr = nullptr;
    ptr = minSumElementsInArray(arr, other, 8, 8);
    for (int i = 0; i < 8; ++i) {
        std::cout << *(ptr + i);
    }
    return 0;
}
