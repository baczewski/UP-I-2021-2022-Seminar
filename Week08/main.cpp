#include <iostream>

#define MAX_SIZE 64

#define MAX_ROWS_SIZE 64
#define MAX_COLS_SIZE 64

//// Task 1 help func
void read_matrix(int matrix[MAX_ROWS_SIZE][MAX_COLS_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cin >> matrix[i][j];
        }
    }
}

//// Task 1 help func
void print_matrix(int matrix[MAX_ROWS_SIZE][MAX_COLS_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << "\n";
    }
    std::cout << "\n";
}
//// Task 1 help func
//void raiseByTen(int matrix[MAX_ROWS_SIZE][MAX_COLS_SIZE], int rows, int cols) {
//    for (int i = 0; i < rows; ++i) {
//        for (int j = 0; j < cols - 1; ++j) {
//            matrix[i][j] += matrix[i][j + 1];
//        }
//    }
//}

//// Task 2 help func
//int minMatrixElement(int matrix[MAX_ROWS_SIZE][MAX_COLS_SIZE], int size) {
//    // 9 3 4
//    // 5 7 8
//    // 2 8 19
//    int minElement = matrix[0][0]; // 2
//    for (int i = 0; i < size; ++i) {
//        for (int j = 0; j < size; ++j) {
//            if (matrix[i][j] < minElement) {
//                minElement = matrix[i][j];
//            }
//        }
//    }
//    return minElement;
//}
//
//// Task 2 help func
//int maxMatrixElement(int matrix[MAX_ROWS_SIZE][MAX_COLS_SIZE], int size) {
//    // 9 3 4
//    // 5 7 8
//    // 2 8 19
//    int maxElement = matrix[0][0]; // 2
//    for (int i = 0; i < size; ++i) {
//        for (int j = 0; j < size; ++j) {
//            if (matrix[i][j] > maxElement) {
//                maxElement = matrix[i][j];
//            }
//        }
//    }
//    return maxElement;
//}
//
//void matrixRowSum(int matrix[MAX_ROWS_SIZE][MAX_COLS_SIZE], int size) {
//    // 2 3 4 -> 9 // {{2, 3, 4}, {5, 7, 8}, {2, 8, 19}}
//    // 5 7 8 -> 20
//    // 2 8 19 -> 29
//    for (int i = 0; i < size; ++i) {
//        int currentSum = 0;
//        for (int j = 0; j < size; ++j) {
//            currentSum += matrix[i][j];
//        }
//        std::cout << "Row " << i + 1 << " sum: " << currentSum << "\n";
//    }
//}
//
//void matrixColSum(int matrix[MAX_ROWS_SIZE][MAX_COLS_SIZE], int size) {
//    // 2 3 4 -> 9 // {{2, 3, 4}, {5, 7, 8}, {2, 8, 19}}
//    // 5 7 8 -> 18
//    // 2 8 19 -> 31
//    for (int i = 0; i < size; ++i) {
//        int currentSum = 0;
//        for (int j = 0; j < size; ++j) {
//            currentSum += matrix[j][i];
//        }
//        std::cout << "Col " << i + 1 << " sum: " << currentSum << "\n";
//    }
//}
//
//void primaryDiagonalSum(int matrix[MAX_ROWS_SIZE][MAX_COLS_SIZE], int size) {
//    // 2 3 4 -> 9 // {{2, 3, 4}, {5, 7, 8}, {2, 8, 19}}
//    // 5 7 8 -> 18
//    // 2 8 19 -> 31
//    int sum = 0;
//    for (int i = 0; i < size; ++i) {
//        sum += matrix[i][i];
//    }
//    std::cout << "Primary diagonal sum: " << sum << "\n";
//}
//
//void sDiagonalSum(int matrix[MAX_ROWS_SIZE][MAX_COLS_SIZE], int size) {
//    // row 0 col 2
//    // row 1 col 1
//    // rows 2 col 0
//    // 2 3 4 -> 9 // {{2, 3, 4}, {5, 7, 8}, {2, 8, 19}}
//    // 5 7 8 -> 18
//    // 2 8 19 -> 31
//    int sum = 0;
//    for (int i = 0; i < size; ++i) {
//        sum += matrix[i][size - 1 - i];
//    }
//    std::cout << "S diagonal sum: " << sum << "\n";
//}
//
//void findIndecesOfElementInAMatrix(int matrix[MAX_ROWS_SIZE][MAX_COLS_SIZE], int rows, int cols, int target) {
//    for (int i = 0; i < rows; ++i) {
//        for (int j = 0; j < cols; ++j) {
//            if (matrix[i][j] == target) {
//                std::cout << "(" << i << ", " << j << ")" << "\n";
//                return;
//            }
//        }
//    }
//    std::cout << "..." << std::endl;
//}

int main() {
//    // Task 1
//    int rows, cols, matrix[MAX_ROWS_SIZE][MAX_COLS_SIZE];
//    std::cin >> rows >> cols;
//    read_matrix(matrix, rows, cols);
//    raiseByTen(matrix, rows, cols);
//    print_matrix(matrix, rows, cols);

//    // Task 2
//    int size, matrix[MAX_ROWS_SIZE][MAX_COLS_SIZE];
//    std::cin >> size;
//    for (int i = 0; i < size; ++i) {
//        for (int j = 0; j < size; ++j) {
//            std::cin >> matrix[i][j];
//        }
//    }
//    std::cout << minMatrixElement(matrix, size) << std::endl;
//    std::cout << maxMatrixElement(matrix, size) << std::endl;

//    // Task 3
//    int size, matrix[MAX_ROWS_SIZE][MAX_COLS_SIZE];
//    std::cin >> size;
//    read_matrix(matrix, size, size);
////    matrixRowSum(matrix, size);
////    primaryDiagonalSum(matrix, size);
////    sDiagonalSum(matrix, size);

    // Task 4
//    int rows, cols, matrix[MAX_ROWS_SIZE][MAX_COLS_SIZE], element;
//    std::cin >> rows >> cols;
//    read_matrix(matrix, rows, cols);
//    std::cin >> element;
//    findIndecesOfElementInAMatrix(matrix, rows, cols, element);

    // asshsA -> a -> *sshs*
    char arr[MAX_SIZE], symbol;
    std::cin.getline(arr, MAX_SIZE);
    std::cin >> symbol;
    for (int i = 0; arr[i] != '\0' ; ++i) {
        if (arr[i] >= 'A' && arr[i] <= 'Z') {
            arr[i] = arr[i] + ('a' - 'A');
        }
    }
    if (symbol >= 'A' && symbol <= 'Z') {
        symbol = symbol + ('a' - 'A');
    }
    for (int i = 0; arr[i] != '\0'; ++i) {
        if (arr[i] == symbol) {
            arr[i] = '*';
        }
    }
    for (int i = 0; arr[i] != '\0'; ++i) {
        std::cout << arr[i];
    }
    // 2 3 4
    // 5 7 8
    // 2 8 19
//    print_matrix(matrix, rows, cols);
//    // Приемаме символен низ, като на мястото на всеки спейс слагаме *-
//    // дхас сдугъ гу -> дхас*-сдугъ*-гу
//    // sggd gdsg shgdg
//    // \0
//    char arr[MAX_SIZE];
//    int arr_size = 0;
//    std::cin.getline(arr, MAX_SIZE);
//    for (int i = 0; arr[i] != '\0'; ++i) {
//        ++arr_size;
//    }
//    for (int i = 0; arr[i] != '\0'; ++i) {
//        if (arr[i] == ' ') {
//            for (int j = arr_size - 1; j >= i; --j) {
//                arr[j + 1] = arr[j];
//            }
//            arr[i] = '*';
//            arr[i + 1] = '-';
//            ++arr_size;
//        }
//    }
//    for (int i = 0; i < arr_size; ++i) {
//        std::cout << arr[i];
//    }
//    int n;
//    int matrix[MAX_ROWS_SIZE][MAX_COLS_SIZE];
//    // row 0 // 0 0 0
//    // row 1 // 0 0 0
//    // row 2 // 0 0 0
//    std::cin >> n;
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < n; ++j) {
//            std::cin >> matrix[i][j];
//        }
//    }
//
//    int matrix1[3][5] = {};
//    matrix1[0][0] = 5;
//    matrix1[1][2] = 4;
//    matrix1[2][4] = 6;
//
//    // 5 0 0 0 0
//    // 0 0 0 0 0
//    // 0 0 0 0 0

    return 0;
}
