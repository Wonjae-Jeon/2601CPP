/*
	Author: Àü¿øÀç
	Student Number: 2023041005
	Date: 20260319
	Lecture: 3
	Problem: 1
*/

#include <iostream>
using namespace std;

int main() {

	int M[3][3] = { {1,2,3},{4,5,6},{7,8,9} };

	int(*ptr)[3];
	int* p;
	int** pt;
	
	ptr = M;
	cout << ptr << M << endl;
	cout << ptr + 1 << M + 1 << endl;
	cout << *(ptr + 1) << ptr[1] << *(M + 1) << M[1] << endl;
	cout << **(ptr + 1) << **(M + 1) << *M[1] << M[1][0] << endl;
	cout << endl;

	p = M[0];
	cout << p << M[0] << *M << endl;
	cout << p + 1 << M[0] + 1 << *M + 1 << endl;
	cout << *(p + 1) << *(M[0] + 1) << *(*M + 1) << endl;
	cout << endl;

	pt = &p;   // pt = M; (X)
	cout << *pt << p << endl;
	cout << **pt << *p << endl;


	return 0;
}