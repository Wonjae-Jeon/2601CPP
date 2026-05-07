/*
	Date: 20260507
	Lecture 9 - Problem 2
*/

#include <iostream>
using namespace std;
#include "Circle.h"

void readRadius(Circle&);

int main() {
	Circle donut;
	readRadius(donut);
	cout << "donut의 면적 = " << donut.getArea() << endl;
}

static void readRadius(Circle &circle) {
	int input = 0;
	cout << "정수 값으로 반지름 입력: ";
	cin >> input;
	circle.setRadius(input);
}