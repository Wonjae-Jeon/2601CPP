/*
	Author: 전원재
	Student Number: 2023041005
	Lecture: 2
	Problem: 5
	Date: 260312
*/

#include <iostream>
#include <cstring>
using namespace std;

int main() {

	char password[100], password2[100];
	cout << "새 암호를 입력하세요>>";
	cin.getline(password, 100, '\n');
	cout << "새 암호를 입력하세요>>";
	cin.getline(password2, 100, '\n');

	strcmp(password, password2) ? (cout << "같지 않습니다." << endl) : (cout << "같습니다." << endl);

	return 0;
}
