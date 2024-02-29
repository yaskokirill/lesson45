#include <stdlib.h>
#include <string>
#include <ctime>

using namespace std;

void random_init(int* vector, int size, int a, int b) {
	srand(time(NULL));

	for (int i = 0; i < size; i++)
	{
		*(vector + i) = rand() % (b - a + 1) + a;
	}
}

string vector_to_string(int* vector, int size) {
	string msg = "";

	for (int i = 0; i < size; i++)
	{
		msg += to_string(*(vector + i)) + " ";
	}

	return msg;
}