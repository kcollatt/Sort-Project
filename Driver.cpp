#include <iostream>
#include <ctime>
#include "Driver.h"
using namespace std;


int* Driver::Unsort(int x[], int size) {

	srand(time(NULL));


	for (int i = 0; i < size; i++) {

		x[i] = rand() % 9999 + 1;

	}

	return x;

}

void Driver::Copy(int x[], int y[], int size) {

	for (int i = 0; i < size; i++) {

		y[i] = x[i];

	}

}