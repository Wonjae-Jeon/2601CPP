/*
	Author: 전원재
	Student Number: 2023041005
	Date: 20260409
	Class: C++
	Lecture: 6
	Problem: 1
*/

#include <iostream>
using namespace std;

class Rectangle {
private:
	int width = 0, height = 0;

public:
	Rectangle() {
		width = 1; height = 1;
	}
	Rectangle(int a) {
		width = a; height = a;
	}
	Rectangle(int a, int b) {
		width = a; height = b;
	}

	bool isSquare() {
		return (width == height) ? true : false;
	}
};

int main() {

	Rectangle rect1;
	Rectangle rect2(3, 5);
	Rectangle rect3(3);

	if (rect1.isSquare()) cout << "rect1은 정사각형이다." << endl;
	if (rect2.isSquare()) cout << "rect2는 정사각형이다." << endl;
	if (rect3.isSquare()) cout << "rect3는 정사각형이다." << endl;

	return 0;
}