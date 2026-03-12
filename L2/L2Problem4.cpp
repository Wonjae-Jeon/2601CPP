/*
	Author: 전원재
	Student Number: 2023041005
	Lecture: 2
	Problem: 4
	Date: 260312
*/

#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char c[100];
	int count = 0;
	cout << "문자들을 입력하라(100개 미만)." << endl;

	cin.getline(c, 100, '\n');

	for (int i = 0; i < strlen(c); i++) {
		if (c[i] == 'X') count++;
	}

	cout << 'X' << "의개수는" << count << endl;
	return 0;
}
