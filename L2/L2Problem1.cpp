/*
	Author: 전원재
	Student Number: 2023041005
	Lecture: 2
	Problem: 1
	Date: 260312
*/


#include <iostream>
using namespace std;

int sum(int, int);

int main() {

	cout << "끝수를 입력하세요>>";

	int n = 0;
	cin >> n;

	if (n <= 0) {
		cout << "양수를 입력하세요";
		return 0;
	}

	cout << "1에서 " << n << "까지의 합은 " << sum(1, n) << "입니다\n";

	return 0;
}

int sum(int a, int b) {
	int result = 0;

	for (int k = a; k <= b; k++) {
		result += k;
	}

	return result;
}