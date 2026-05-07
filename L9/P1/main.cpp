/*
	Date: 20260507
	Lecture 9 - Problem 1
*/

#include <iostream>
using namespace std;

#include "Circle.h"

void swap(Circle&, Circle&);

int main() {
	
	Circle c1(2);
	Circle c2(3);

	cout << "A의 면적: " << c1.getArea() << " B의 면적: " << c2.getArea() << endl;
	swap(c1, c2);
	cout << "A의 면적: " << c1.getArea() << " B의 면적: " << c2.getArea() << endl;

	return 0;
}

void swap(Circle &a, Circle &b) {
	Circle temp;
	temp = a;
	a = b;
	b = temp;
}