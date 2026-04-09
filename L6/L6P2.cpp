/*
	Author: 전원재
	Student Number: 2023041005
	Date: 20260409
	Class: C++
	Lecture: 6
	Problem: 2
*/

#include <iostream>
using namespace std;

class Oval {
private:
	int width, height;
public:
	Oval() {
		width = 1; height = 1;
	}
	Oval(int a, int b) {
		width = a; height = b;
	}
	~Oval() {
		cout << "Oval 소멸: width = " << width << ", height = " << height << endl;
	}
	int getWidth() {
		return width;
	}
	int getHeight() {
		return height;
	}
	void set(int a, int b) {
		width = a; height = b;
	}
	void show() {
		cout << "width = " << width << ", height = " << height << endl;
	}
};

int main() {

	Oval a, b(3, 4);
	a.show();
	a.set(20, 30);
	a.show();
	cout << "b = " << b.getWidth() << ", " << b.getHeight() << endl;

	return 0;
}