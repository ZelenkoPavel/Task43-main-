#include <iostream>

using namespace std;

int the_sum_of_the_vector_values(int* vector, int size) {

	int sum = 0;

	int first_index = 0;
	int second_index = 0;

	int max = -2147483648;
	int min = 2147483647;
	for (int i = 0; i < size; i++) {
		int num = *(vector + i) < 0 ? -vector[i] : vector[i];

		if (max < num) {
			max = num;
		}
	}
	for (int j = 0; j < size; j++) {
		int num = *(vector + j) < 0 ? -vector[j] : vector[j];

		if (min > num) {
			min = num;
		}
	}

	for (int k = 0; k < size; k++) {
		int num = *(vector + k) < 0 ? -vector[k] : vector[k];

		if (num == max) {
			first_index = k;
		}
	}
	for (int l = 0; l < size; l++) {
		int num = *(vector + l) < 0 ? -vector[l] : vector[l];

		if (num == min) {
			second_index = l;
			break;
		}
	}

	if (first_index > second_index) {
		int t = first_index;
		first_index = second_index;
		second_index = t;
	}

	for (int h = first_index + 1; h < second_index; h++) {
		sum += *(vector + h);
	}

	return sum;
}