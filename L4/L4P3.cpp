/*
	Author: 전원재
	Student Number: 2023041005
	Lecture: 4
	Problem: 3
	Date: 20260326
*/

#include <iostream>
using namespace std;

int big(int a, int b, int maximum = 100);

int main() {
	int x = big(3, 5); // 3과 5중 큰 값 5는 최대값 100보다 작으므로, 5 리턴
	int y = big(300, 60); // 300과 60중 큰 값 300이 최대값 100보다 크므로, 100 리턴
	int z = big(30, 60, 50); // 30과 60 중 큰 값 60이 최대값 50보다 크므로, 50 리턴
	cout << x << ' ' << y << ' ' << z << endl;
}

int big(int a, int b, int maximum) {
	int result = 0;
	if (a < maximum && b < maximum) {
		(a > b) ? result = a : result = b;
	}
	else result = maximum;

	return result;
}