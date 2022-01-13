#include <iostream>

#define MAX_SIZE 1000

// a 5 b 10
// a 15 b 10
// a 15 b 5
// a 10 b 5
void swap(int &a, int &b) {
    a = a + b;
    b = a - b;
    a = a - b;
}

int sum_array(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum;
}

double average(int arr[], int size) {
    return sum_array(arr, size) / (double) size;
}

void print_reverse(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[size - 1 - i] << " ";
    }
    std::cout << "\n";
    for (int i = size - 1; i >= 0; --i) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}

int count_number_in_arr(int arr[], int size, int number) {
    int counter = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] == number) {
            ++counter;
            std::cout << i << " ";
        }
    }
    std::cout << "\n";
    return counter;
}

// 1 2 3 4 5 6 7
// 1 2 3 4
// 4 2 3 1
// 4 3 2 1
// 4 2 3 1
// 1 2 3 4
void reverse_array(int arr[], int size) {
    for (int i = 0; i < size / 2; ++i) {
        swap(arr[i], arr[size - i - 1]);
    }
}

void print_array(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}

// 123
// 12
// 1
// 0
bool isLessThanTen(int number) {
    int result = 1;
    while (number != 0) {
        int lastDigit = number % 10;
        result *= lastDigit;
        number /= 10;
    }
    return (result < 10);
}

void countOfLessThanThenNumbers(int arr[], int size) {
    int counter = 0;
    for (int i = 0; i < size; ++i) {
        if (isLessThanTen(arr[i]))
            ++counter;
    }
    if (!counter)
        std::cout << "no\n";
    else std::cout << counter << "\n";
}

void func(int &number, int numberygsygdgas) {
    while (number >= numberygsygdgas) {
        number -= numberygsygdgas;
        std::cout << numberygsygdgas << "+";
    }
}

void funcss() {
    int a = 14, b = 16, d = 4;
    for (int i = a; i <= b; ++i) {
        int counter = 0;
        for (int j = 1; j <= i; ++j) {
            if (i % j == 0)
                counter++;
        }
        if (counter < d) {
            std::cout << "False";
            return;
        }
    }
    std::cout << "True";
}

// 1 2 3 4 5 -> 5 4 3 2 1
// 1 2 3 4 5 6 -> 6 5 4 3 2 1
int main() {
//    int number = 119;
//    func(number, 20);
//    func(number, 12);
//    func(number, 8);
//    func(number, 1);
    funcss();
//    reverse_array(numbers_arr, 5);
//    print_array(numbers_arr, 5);
//    std::cout << "Sum: " << sum_array(numbers_arr, 4) << "\n";
//    std::cout << "Avg: " << average(numbers_arr, 4) << "\n";
//    print_reverse(numbers_arr, 4);
    // Task 1
//    int numbers[MAX_SIZE] = {};
//    int n;
//    std::cin >> n;
//    for (int i = 0; i < n; ++i) {
//        std::cin >> numbers[i];
//    }
//
//    for (int i = 0; i < n; ++i) {
//        std::cout << numbers[i] << " ";
//    }

    return 0;
}
