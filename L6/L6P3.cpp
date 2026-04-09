/*
	Author: 전원재
	Student Number: 2023041005
	Date: 20260409
	Class: C++
	Lecture: 6
	Problem: 3
*/

#include <iostream>
using namespace std;

class MyVector {
	int* mem;
	int size;
public:
	MyVector(int n = 5, int val = 0) {
		mem = new int[n];
		size = n;
		for (int i = 0; i < size; i++) mem[i] = val;
	}
	~MyVector() {
		delete [] mem;
	}
	void printMyVector() {
		for (int i = 0; i < size; i++) {
			cout << i << "번째: " << mem[i] << endl;
		}
	}
};

int main() {

	MyVector m1;
	MyVector m2(3, 7);

	cout << "default 인자로 생성된 vector" << endl;
	m1.printMyVector();
	cout << "전달받은 값으로 생성된 vector" << endl;
	m2.printMyVector();

	return 0;
}