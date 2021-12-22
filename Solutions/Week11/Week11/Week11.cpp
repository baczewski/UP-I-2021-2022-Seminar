#include <iostream>

int extraTask(int*, int);

void call(char, char);

void printNumbers(int);

int sumOfDigits(int);

int recStrLen(const char*);

int factorial(int);

bool areEqual(const char*, const char*);

int fibonacci(int);

int minArrayElement(int*, int);

int decimalToBinary(int);

void evaluate(char*, int, int, int);

void swapCase(char*);

int main()
{
	call('A', 'M');

	// Test extraTask
	/*int arr[] = {7, 3, 5, 6, 2, 1, 7, 3, 9, 6, 4};
	std::cout << extraTask(arr, 11);*/

	// Test sumOfDigits
	/*std::cout << sumOfDigits(1111) << std::endl;
	std::cout << sumOfDigits(1234) << std::endl;
	std::cout << sumOfDigits(10) << std::endl;*/

	// Test recStrLen
	/*std::cout << recStrLen("abc") << std::endl;
	std::cout << recStrLen("") << std::endl;
	std::cout << recStrLen("Happy new year") << std::endl;*/

	// Test reverse
	/*std::cout << factorial(5) << std::endl;
	std::cout << factorial(6) << std::endl;
	std::cout << factorial(1) << std::endl;*/

	// Test areEqual
	/*std::cout << areEqual("1234", "1234") << std::endl;
	std::cout << areEqual("12", "1234") << std::endl;
	std::cout << areEqual("1", "") << std::endl;*/

	// Test fibonacci
	/*std::cout << fibonacci(7) << std::endl;
	std::cout << fibonacci(4) << std::endl;
	std::cout << fibonacci(2) << std::endl;*/

	// Test minArrayElement
	/*int arr[] = {1,2,3,0};
	std::cout << minArrayElement(arr, 4) << std::endl;*/

	// Test decimalToBinary
	/*std::cout << decimalToBinary(5) << std::endl;
	std::cout << decimalToBinary(6) << std::endl;*/

	// Test evaluate
	/*evaluate("3 Doors Down", 0, 0, 0);*/

	// Test swapCase
	/*char str[] = "Hello iTS me32 s28<s";
	swapCase(str);
	std::cout << str;*/

	return 0;
}

int extraTask(int* arr, int size)
{
	if (*arr == 8 || *arr == 9 || *arr == 0 || size == 0) {
		return 0;
	}
	else if (*arr >= 4 && *arr <= 7) {
		return *arr + extraTask(arr + 1, size - 1);
	}
	else if (*arr >= 1 && *arr <= 3) {
		return extraTask(arr + 1, size - 1) - *arr;
	}
}

void call(char startSymbol, char endSymbol)
{
	if (startSymbol == endSymbol) {
		return;
	}
	std::cout << startSymbol << " is on the line." << std::endl;
	call(startSymbol + 1, endSymbol);
	std::cout << startSymbol << " left the conversation." << std::endl;
}

void printNumbers(int number)
{
	if (number == 0) {
		return;
	}
	std::cout << number << " ";
	printNumbers(number - 1);
	std::cout << number << " ";
}

// Task 0
int sumOfDigits(int number)
{
	if (number < 10) {
		return number;
	}

	return (number % 10) + sumOfDigits(number / 10);
}

// Task 1
int recStrLen(const char* string)
{
	if (*string == '\0') {
		return 0;
	}
	return 1 + recStrLen(string + 1);
}

// Task 3
int factorial(int number)
{
	if (number == 0) {
		return 1;
	}
	return number * factorial(number - 1);
}

// Task 4
bool areEqual(const char* first, const char* second)
{
	if (*first == '\0' && *second == '\0') {
		return true;
	}
	if (*first != *second) {
		return false;
	}
	return areEqual(first + 1, second + 1);
}

// Task 5
int fibonacci(int number)
{
	if (number == 1 || number == 2) {
		return 1;
	}
	return fibonacci(number - 1) + fibonacci(number - 2);
}

// Task 6
// 1 2 3 0
// min(0, min(3, min(2, 1)))
int minArrayElement(int* arr, int size)
{
	if (size == 1) {
		return arr[0];
	}
	return std::min(arr[size - 1], minArrayElement(arr, size - 1));
}

// Task 7
// 5 -> 2(1) -> 1(0) -> 0(1)
// 6 -> 3(0) -> 1(1) -> 0(1)
int decimalToBinary(int number)
{
	if (number == 0) {
		return 0;
	}
	return number % 2 + (10 * (decimalToBinary(number / 2)));
}

// Task 8
void evaluate(char* string, int numbers, int capital, int lower)
{
	if (*string == '\0') {
		std::cout << "Numbers: " << numbers << std::endl;
		std::cout << "Lower: " << lower << std::endl;
		std::cout << "Capital: " << capital << std::endl;
		return;
	}
	if (*string >= '0' && *string <= '9') {
		return evaluate(string + 1, numbers + 1, capital, lower);
	}
	else if (*string >= 'A' && *string <= 'Z') {
		return evaluate(string + 1, numbers, capital + 1, lower);
	}
	else if (*string >= 'a' && *string <= 'z') {
		return evaluate(string + 1, numbers, capital, lower + 1);
	}
	return evaluate(string + 1, numbers, capital, lower);
}

void swapCase(char* string)
{
	if (*string == '\0') {
		return;
	}
	if (*string >= 'A' && *string <= 'Z') {
		*string += ('a' - 'A');
	}
	else if (*string >= 'a' && *string <= 'z') {
		*string -= ('a' - 'A');
	}
	return swapCase(string + 1);
}
