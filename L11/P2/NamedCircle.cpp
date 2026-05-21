#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	// 매개변수가 없는 생성자 함수
	Circle() {
		radius = 1;
	}

	// 매개변수가 있는 생성자 함수
	Circle(int r) {
		radius = r;
	}

	// setRadius 함수
	void setRadius(int a) {
		radius = a;
	}

	// getRadius 함수
	int getRadius() {
		return radius;
	}

	// showRadius 함수
	void showRadius() {
		cout << "반지름 " << radius << endl;
	}

};

class NamedCircle : public Circle {
	string name;
public:
	// 매개변수가 없는 생성자 함수 (Circle 생성을 같이 해야 함!)
	NamedCircle() : Circle() {
		name = "circle name";
	}

	// 매개변수가 있는 생성자 함수 (Circle 생성을 같이 해야 함!)
	NamedCircle(string s) : Circle() {
		name = s;
	}

	NamedCircle(int r, string s) : Circle(r) {
		name = s;
	}

	// setName 함수
	void setName(string s) {
		name = s;
	}

	// show 함수
	void show() {
		cout << "반지름이 " << getRadius() << "인 " << name << endl;
	}

	string getName() {
		return name;
	}
};