#include <iostream>
#include <string>
#include <ctime>

using namespace std;

void random_init(int* vector, int size, int min, int max) {
	if (min > max) {
		int t = min;
		min = max;
		max = t;
	}
	srand(time(NULL));

	for (int i = 0; i < size; i++) {
		vector[i] = rand() % (max - min + 1) + min;
	}
}

void  user_init(int* vector, int size) {
	cout << "Input numbers: \n";
	for (int i = 0; i < size; i++) {
		cin >> vector[i];
	}
}

string convert_to_string(int* vector, int size) {
	if (size <= 0) {
		return "Incorrect data was entered\n";
	}
	string msg = "";

	for (int i = 0; i < size; i++) {
		msg += to_string(vector[i]) + " ";
	}

	return msg;
}