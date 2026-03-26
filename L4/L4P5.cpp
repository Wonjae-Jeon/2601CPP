/*
	Author: 전원재
	Student Number: 2023041005
	Lecture: 4
	Problem: 5
	Date: 20260326
*/

#include <iostream>
using namespace std;

template <class T>
void reverseArray(T array[], int size) {
	T tmp;
	for (int i = size - 1; i >= size/2; i--) {
		tmp = array[i];
		array[i] = array[size - 1 - i];
		array[size - 1 - i] = tmp;
	}
}

int main() {

	int x[] = { 1, 10, 100, 5, 4 };

	reverseArray(x, 5);
	for (int i = 0; i < 5; i++)
		cout << x[i] << ' '; // 4 5 100 10 1 이 출력된다.
	cout << endl;

	double y[] = { 1.3, -7.330, 5.84, 0.84, -66.428, 2.6, 71.1 };

	reverseArray(y, 7);

	for (int i = 0; i < 7; i++)
		cout << y[i] << ' ';
	cout << endl;

	return 0;
}