/*
	Author: 전원재
	Student Number: 2023041005
	Date: 20260319
	Lecture: 3
	Problem: 4
*/

#include <iostream>
using namespace std;

char& find(char a[], char c, bool& success);

int main() {

	char s[] = "Mike";
	bool b = false;
	char& loc = find(s, 'M', b);
	
	if (b == false) {
		cout << "M을 발견할 수 없다" << endl;
		return 0;
	}

	loc = 'm'; // 'M' 위치에 'm' 기록
	cout << s << endl; // "mike"가 출력됨

	return 0;
}

char& find(char a[], char c, bool& success) {
	
	for (int i = 0; i < sizeof(a); i++) {
		if (a[i] == c) {
			success = true;
			return a[i];
		}
	}

	success = false;
	return a[0];
}