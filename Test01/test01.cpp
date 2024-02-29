//#include <iostream>
//
//using namespace std;
//
//int main() {
//	int size;
//
//	do {
//		cout << "Input size of array: ";
//		cin >> size;
//	} while (size <= 0);
//
//	int* array = new int[size];
//
//	for (int i = 0; i < size; i++)
//	{
//		*(array++) = rand() % 100;
//	}
//
//	for (int i = 0; i < size; i++)
//	{
//		cout << *(--array) << " ";
//	}
//
//	cout << endl;
//
//	return 0;
//}