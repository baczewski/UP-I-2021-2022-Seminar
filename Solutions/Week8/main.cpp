#include <iostream>
//
//// Task 5 help function, we do not ignore capital and small letters
//unsigned countSymbolOccurrencesInAString(const char string[], const char symbol) {
//    unsigned int counter = 0;
//    for (int i = 0; string[i] != '\0'; ++i) {
//        if (symbol == string[i])
//            counter++;
//    }
//    return counter;
//}
//
//// Task 5 help function
//void replaceSymbolOccurrencesInAString(char string[], const char targetSymbol, const char replaceWith) {
//    for (int i = 0; string[i] != '\0'; ++i) {
//        if (string[i] >= 'A' && string[i] <= 'Z')
//            string[i] += 'a' - 'A';
//        if (targetSymbol == string[i])
//            string[i] = replaceWith;
//    }
//}
//
//// Task 5 help function
//void printString(const char string[]) {
//    for (int i = 0; string[i] != '\0'; ++i) {
//        std::cout << string[i];
//    }
//    std::cout << std::endl;
//}

// Task 6 help function
void fillMatrix(int matrix[][64], int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            std::cin >> matrix[i][j];
        }
    }
}

bool checkFirstSumInMatrix(int matrix[][64], int size) {
    int result_top_half = 1, result_bottom_half = 1;
    for (int i = 0; i < size / 2; ++i) {
        result_top_half *= matrix[i][i];
    }
    for (int i = size - 1; i >= size / 2; --i) {
        result_bottom_half *= matrix[i][size - i - 1];
    }
    std::cout << result_top_half << " " << result_bottom_half;
    return false;
}

int main() {
//    // Task 5
//    const int MAX_SIZE = 64;
//    char string[MAX_SIZE], symbol;
//    std::cin.getline(string, MAX_SIZE);
//    std::cin >> symbol;
//    std::cout << countSymbolOccurrencesInAString(string, symbol) << std::endl;
//    replaceSymbolOccurrencesInAString(string, 'm', '*');
//    printString(string);

    // Task 6
    const int MAX_SIZE = 64;
    int size, matrix[MAX_SIZE][MAX_SIZE];
    std::cin >> size;
    fillMatrix(matrix, size);
    checkFirstSumInMatrix(matrix, size);

    return 0;
}
