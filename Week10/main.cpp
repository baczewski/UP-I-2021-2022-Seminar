#include <iostream>
#include <cmath>

/// Статична памет - глобални и статични променливи

/// Стекова памет - променливи във функции и като параметри на функция

int *half(int *arr, int size) {
    int *copy = new int[size / 2]; // 0x0000
    for (int i = 0; i < size / 2; ++i) {
        copy[i] = arr[i];
    }
    return copy; // 0x0000
}

// [1, 2, 3] -> [1, 2, 3, ., ., .]
//int *resize(const int *arr, int size, int newSize) {
//    int *newArray = new int[newSize];
//    for (int i = 0; i < size; ++i) {
//        newArray[i] = arr[i];
//    }
//    return newArray;
//}

void resize(int *&arr, int &size, int newSize) {
    int *newArray = new int[newSize];
    for (int i = 0; i < size; ++i) {
        newArray[i] = arr[i];
    }
    arr = newArray;
    size = newSize;
}

int *copyArray(const int *arr, int size) {
    int *copy = new int[size];
    for (int i = 0; i < size; ++i) {
        copy[i] = arr[i];
    }
    return copy;
}

// 99
// 100
// 1000 \0

char *intToString(int num) {
    int size = floor(log10(num) + 1);
    char *string = new char[size + 1];
    for (int i = size - 1; i >= 0; --i) {
        string[i] = num % 10 + '0';
        num /= 10;
    }
    string[size] = '\0';
    return string;
}

void resize_(int *&arr, int size, int &capacity) {
    int *temp = new int[capacity * 2];
    for (int i = 0; i < size; ++i) {
        temp[i] = arr[i];
    }
    capacity *= 2;
    arr = temp;
}

// size = 4
// capacity = 8
// [ 2 , 5 , 3 , 7 ,  ,  ,  ,  ]
void push_back(int *&arr, int &size, int &capacity, int element) {
    if (size == capacity)
        resize_(arr, size, capacity);
    arr[size++] = element;
}

// * [ ...... ]
// ** [[...],[...],[...]]
// [[[]],[[]]]

int main() {
    // [2, 3, ., .]
    int *arr = new int[4], size = 0, capacity = 4;
    push_back(arr, size, capacity, 1);
    push_back(arr, size, capacity, 2);
    push_back(arr, size, capacity, 3);
    push_back(arr, size, capacity, 4);
    push_back(arr, size, capacity, 5);
    push_back(arr, size, capacity, 6);

    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    delete[] arr;
//    int num;
//    std::cin >> num;
//    char *string = intToString(num);
//    std::cout << string;
//    delete[] string;

//    int arr[3] = {1, 2, 3};
//    int *ptr = copyArray(arr, 3);
//
//    arr[0] = 0;
//
//    for (int i = 0; i < 3; ++i) {
//        std::cout << ptr[i];
//    }
//
//    delete[] ptr;

//    int size;
//    std::cin >> size;
//    int *ptr = new int[size];
//    for (int i = 0; i < size; ++i) {
//        std::cin >> ptr[i];
//    }
//    resize(ptr, size, size * 2);
//    for (int i = 3; i < size; ++i) {
//        std::cin >> ptr[i];
//    }
//
//    for (int i = 0; i < size; ++i) {
//        std::cout << ptr[i] << " ";
//    }
//
//    delete[] ptr;

//    int *newArr = resize(arr, size, size * 2);

    /// Task 0
//    int arr[4] = {1, 2, 3, 4};
//    int *halfArray = half(arr, 4); // 0x0000
//    delete[] halfArray; // 0x0000

    /// Task 1
//    int teachersCount, gradesCount;
//    std::cin >> teachersCount;
//
//    int **matrix = new int*[teachersCount];
//    for (int i = 0; i < teachersCount; ++i) {
//        std::cin >> gradesCount;
//        matrix[i] = new int[gradesCount + 1];
//        for (int j = 0; j < gradesCount; ++j) {
//            std::cin >> matrix[i][j];
//        }
//        matrix[i][gradesCount] = -1;
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
//    delete[] matrix;


//    int size;
//    std::cin >> size;
//
//    // 2000 * 4 -> 8000
//    int ***cube = new int **[size];
//    for (int i = 0; i < size; ++i) {
//        cube[i] = new int *[size];
//        for (int j = 0; j < size; ++j) {
//            cube[i][j] = new int[size];
//        }
//    }
//
//    for (int i = 0; i < size; ++i) {
//        for (int j = 0; j < size; ++j) {
//            delete[] cube[i][j];
//        }
//        delete[] cube[i];
//    }
//    delete[] cube;
//    int **matrix = new int*[size];
//    for (int i = 0; i < size; ++i) {
//        matrix[i] = new int[size];
//        for (int j = 0; j < size; ++j) {
//            std::cin >> matrix[i][j];
//        }
//    }
//
//    for (int i = 0; i < size; ++i) {
//        for (int j = 0; j < size; ++j) {
//            std::cout << matrix[i][j] << " ";
//        }
//        std::cout << "\n";
//    }
//
//    for (int i = 0; i < size; ++i) {
//        delete[] matrix[i];
//    }
//    delete[] matrix;
//    int *arr = new int[size];
//    int *arr1 = new int[size + size];
//    for (int i = 0; i < size; ++i) {
//        std::cin >> arr[i];
//    }
//
//    for (int i = 0; i < size; ++i) {
//        std::cout << arr[i] << " ";
//    }
//
//    delete[] arr;
//    delete[] arr1;

    return 0;
}
