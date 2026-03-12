/*
	Author: 전원재
	Student Number: 2023041005
	Lecture: 2
	Problem: 3
	Date: 260312
*/


#include <iostream>
using namespace std;

double biggest(double[], int);

int main() {
	double a[5];

	cout << "5개의 실수를 입력하라>>";

	for (int i = 0; i < 5; i++) {
		cin >> a[i];
	}

	cout << "제일 큰 수= " << biggest(a, 5) << endl;
}

double biggest(double a[], int n) {

	int biggest = 0;

	for (int i = 0; i < n; i++) {
		if (a[i] > a[biggest])
			biggest = i;
	}
	
	return a[biggest];
}
