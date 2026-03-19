/*
	Author: 전원재
	Student Number: 2023041005
	Date: 20260319
	Lecture: 3
	Problem: 3
*/

#include <iostream>
using namespace std;

bool bigger(int a, int b, int& big);

int main() {

	int x, y, big;
	bool b;

	cout << "두 정수를 입력하세요>> ";
	cin >> x >> y;
	
	b = bigger(x, y, big);
	
	if (b)
		cout << "same" << endl;
	else
		cout << "큰 수는 " << big << "입니다." << endl;

	return 0;
}

bool bigger(int a, int b, int& big) {

	if (a == b) return true;
	else
		(a > b) ? big = a : big = b;

	return false;
}