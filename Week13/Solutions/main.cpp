#include <iostream>

void modifyString(char* str, int* numbers) {
	if (*str == '\0')
		return;

	if (*numbers == 1 && (*str >= 'a' && *str <= 'z'))
		*str += 'A' - 'a';

	else if (*numbers == -1 && (*str >= 'A' && *str <= 'Z'))
		*str += 'a' - 'A';

	else if (*numbers == 0)
		*str = '_';

	return modifyString(str + 1, numbers + 1);
}

bool validPointCoordinates(int x, int y, int size) {
	return x >= 0 && y >= 0 && x < size&& y < size;
}

float findTrippleDianonalSum(float matrix[40][40], int size, int x, int y) {
	float sum = 0.0f;
	for (int i = 0; i < 3; i++, y++)

		if (validPointCoordinates(x - i, y, size))
			sum += matrix[x - i][y];

	return sum;
}

int findSentencesCount(char* str) {
	int count = 0;
	for (size_t i = 0; *(str + i) != '\0'; i++)

		if (*(str + i) == '?' || *(str + i) == '.' || *(str + i) == '!')
			count++;

	return count;
}

int findQuotesCount(char* str) {
	int count = 0;
	for (size_t i = 0; *(str + i) != '\0'; i++)

		if (*(str + i) == '\"' && *(str + i + 1) != '\"')
			count++;

	return count / 2;
}

int main() {
	char str[] = "Gauss-Ostrogradsky";
	int arr[] = { 1, 1, 0, 1, 0, 1, -1, -1, -1, -1, -1, 1, -1, -1, -1 , 0, 1, 1 };
	modifyString(str, arr);
	std::cout << str;
	/*char str[] = "\"Hey buddy\", what\'s up \"buddy\". \"Hello?";
	std::cout << (float)findQuotesCount(str) / findSentencesCount(str);*/

	/*float matrix[40][40], size, maxSum = 0;
	std::cin >> size;

	for (size_t i = 0; i < size; i++)

		for (size_t j = 0; j < size; j++)
			std::cin >> matrix[i][j];

	for (size_t i = 0; i < size; i++)

		for (size_t j = 0; j < size; j++)
		{
			float currSum = findTrippleDianonalSum(matrix, size, i, j - 2)
				+ findTrippleDianonalSum(matrix, size, i + 1, j - 1)
				+ findTrippleDianonalSum(matrix, size, i + 2, j);

			if (currSum > maxSum)
				maxSum = currSum;
		}

	std::cout << "Max sum: " << maxSum << std::endl;*/
	return 0;
}