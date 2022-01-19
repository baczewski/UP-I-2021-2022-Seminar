#include <iostream>

int elementCountInMatrix(char** matrix, int rows, int cols, int targetRow, int targetCol) {
	int counter = 0;

	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			if (i == targetRow && j == targetCol) {
				continue;
			}

			if (i != targetRow && j != targetCol && matrix[i][j] == matrix[targetRow][targetCol]) {
				++counter;
			}
		}
	}

	return counter;
}

char* takeFirstKSymbols(char* string, int k) {
	char* result = new char[k + 1];
	size_t i = 0;

	for (; i < k && string[i] != '\0'; i++)
	{
		result[i] = string[i];
	}

	result[i] = '\0';

	return result;
}

// strcat
// strcpy
// strcmp -
// strlen

int strLen(char* string) {
	int index = -1;
	while (string[++index] != '\0');
	return index;
}

char* takeLastKSymbols(char* string, int k) {
	int length = strLen(string);

	return takeFirstKSymbols(string, length - k);
}

char* strCat(char* string, char* other) {
	int stringLength = strLen(string);
	int otherLength = strLen(other);

	char* result = new char[stringLength + otherLength + 1];
	size_t i = 0;

	for ( ; i < stringLength; i++)
	{
		result[i] = string[i];
	}

	for (size_t j = 0; j < otherLength; j++)
	{
		result[i++] = other[j];
	}

	result[i] = '\0';

	return result;
}

bool charExistsInString(char* string, char target) {
	for (size_t i = 0; string[i] != '\0'; i++)
	{
		if (string[i] == target) {
			return true;
		}
	}

	return false;
}

bool setCompare(char* first, char* second) {
	if (*first == '\0') {
		return true;
	}

	if (!charExistsInString(second, *first)) {
		return false;
	}

	return setCompare(first + 1, second);
}

struct Point {
	int x;
	int y;
};

int calculateString(char* string) {
	int sum = 0, num = 0, count = 0;
	
	int i = 0;
	while (string[i] >= '0' && string[i] <= '9') {
		num = num * 10 + string[i] - '0';
		count++;
		i++;
	}

	sum = num;

	// 44-9000

	while (string[i] != '\0') {
		num = count = 0;

		while (string[i] >= '0' && string[i] <= '9') {
			num = num * 10 + string[i] - '0';
			count++;
			i++;
		}

		if (string[i - count - 1] == '+') {
			sum += num;
		}
		else if (string[i - count - 1] == '-') {
			sum -= num;
		}

		i++;
	}

	return sum;
}

int main()
{
	char arr[] = "5-2+4+9";
	std::cout << calculateString(arr);

	/*char first[100];
	char second[100];
	std::cin.getline(first, 100);
	std::cin.getline(second, 100);
	std::cout << setCompare(first, second);*/

	/*int k;
	char first[15];
	char second[15];
	std::cin.getline(first, 15);
	std::cin.getline(second, 15);
	std::cin >> k;

	char* string = takeLastKSymbols(first, k);
	char* other = takeFirstKSymbols(second, k);
	char* res = strCat(string, other);

	std::cout << res;

	delete[] string;
	delete[] other;
	delete[] res;*/

	/*int rows, cols;
	std::cin >> rows >> cols;

	char** matrix = new char* [rows];
	int** result = new int* [rows];

	for (size_t i = 0; i < rows; i++)
	{
		matrix[i] = new char[cols];
		result[i] = new int[cols];

		for (size_t j = 0; j < cols; j++)
		{
			std::cin >> matrix[i][j];
		}
	}

	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			result[i][j] = elementCountInMatrix(matrix, rows, cols, i, j);
		}
	}

	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			std::cout << result[i][j] << " ";
		}

		std::cout << std::endl;
	}

	for (size_t i = 0; i < rows; i++)
	{
		delete[] matrix[i];
		delete[] result[i];
	}

	delete[] matrix;
	delete[] result;*/

	return 0;
}
