#include <iostream>
using namespace std;

void random_init(int* vector, int size, int a, int b);
string vector_to_string(int* vector, int size);

int negative_elements_sum(int* vector, int size, int sum);
int product_of_elements_between_max_and_min(int* vector, int size, int product, int max, int min);

int main() {
	int size;

	do {
		cout << "Input size of array: ";
		cin >> size;
	} while (size <= 0);

	int* vector = new int[size];

	random_init(vector, size, -10, 10);

	cout << "Elements of vector: ";
	cout << vector_to_string(vector, size) << endl;

	cout << "Sum of negative elements: " << negative_elements_sum(vector, size, 0) << endl;
	cout << "Product of elements between max and min elements: " << product_of_elements_between_max_and_min(vector, size, 1, 0, 10);

	delete[] vector;

	return 0;
}