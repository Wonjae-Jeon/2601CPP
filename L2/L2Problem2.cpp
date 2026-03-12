/*
	Author: Àü¿øÀç
	Student Number: 2023041005
	Lecture: 2
	Problem: 2
	Date: 260312
*/


#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j < 10; j++) {
			cout << j << "x" << setw(2) << left << i << "=" << setw(3) << left << i * j;
		}
		cout << endl;
	}

	return 0;
}
