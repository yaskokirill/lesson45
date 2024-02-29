int negative_elements_sum(int* vector, int size, int sum) {
	for (int i = 0; i < size; i++)
	{
		if (*(vector + i) < 0) {
			sum += *(vector + i);
		}
	}

	return sum;
}

int product_of_elements_between_max_and_min(int* vector, int size, int product, int max, int min) {
	int max_i;
	int min_i;

	for (int i = 0; i < size; i++)
	{
		if (*(vector + i) < min) {
			min = *(vector + i);
			min_i = i;
		}
	}

	for (int i = 0; i < size; i++)
	{
		if (*(vector + i) > max) {
			max = *(vector + i);
			max_i = i;
		}
	}
	
	if (min_i < max_i) {
		for (int i = min_i + 1; i < max_i; i++)
		{
			product *= *(vector + i);
		}
	}
	else {
		for (int i = max_i + 1; i < min_i; i++)
		{
			product *= *(vector + i);
		}
	}

	return product;
}