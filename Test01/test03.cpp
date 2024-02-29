#include <iostream>

using namespace std;

int main() {
	const int size = 10;

	int array[size];

	int* array = new int[size];

	for (int i = 0; i < size; i++)
	{
		*(array + i) = rand() % 100;
	}

	for (int i = size - i; i < size; i--)
	{
		cout << *(array + i) << " ";
	}

	cout << endl;

	for (int i = size - i; i < size; i--)
	{
		cout << *(array + i) << " ";
	}

	return 0;
}