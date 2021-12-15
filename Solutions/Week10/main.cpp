#include <iostream>
#include <valarray>

/// Task 0
int *halfArray(const int *arr, int size) {
    int *newArray = new int[size / 2];
    for (int i = 0; i < size / 2; ++i) {
        *(newArray + i) = *(arr + i);
    }
    return newArray;
}

/// Task 2
int *resizeArray(const int *arr, int size, int newSize) {
    int *newArray = new int[newSize];
    for (int i = 0; i < size; ++i) {
        *(newArray + i) = *(arr + i);
    }
    return newArray;
}

/// Task 3
int *copyArray(const int *arr, int size) {
    int *newArray = new int[size];
    for (int i = 0; i < size; ++i) {
        *(newArray + i) = *(arr + i);
    }
    return newArray;
}

/// Task 4
char *intToString(int number) {
    int size = floor(log10(number) + 1);
    char *string = new char[size + 1];
    for (int i = size - 1; i >= 0; --i) {
        string[i] = number % 10 + '0';
        number /= 10;
    }
    string[size] = '\0';
    return string;
}

int main() {
    /// Task 0
//    int arr[] = {1, 2, 3, 4};
//    int *half = halfArray(arr, 4);
//    delete[] half;

    /// Task 1
//    int teachersCount, notesCount;
//    std::cin >> teachersCount;
//    int **matrix = new int*[teachersCount];
//    for (int i = 0; i < teachersCount; ++i) {
//        std::cin >> notesCount;
//
//        matrix[i] = new int[notesCount + 1];
//        for (int j = 0; j < notesCount; ++j) {
//            std::cin >> matrix[i][j];
//        }
//        matrix[i][notesCount] = -1;
//    }
//
//    for (int i = 0; i < teachersCount; ++i) {
//        for (int j = 0; matrix[i][j] != -1; ++j) {
//            std::cout << matrix[i][j] << " ";
//        }
//        std::cout << std::endl;
//    }
//
//    for (int i = 0; i < teachersCount; ++i) {
//        delete[] matrix[i];
//    }
//
//    delete[] matrix;

    /// Task 2
//    int arr[] = {2,3,4,5};
//    int *newArr = resizeArray(arr, 4, 10);
//
//    delete[] newArr;

    /// Task 4
    int number;
    std::cin >> number;
    char *string = intToString(number);
    std::cout << string;
    delete[] string;
    return 0;
}
