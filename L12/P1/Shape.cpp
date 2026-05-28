#include <iostream>
using namespace std;

class Shape {
public:
	virtual string getName() = 0;
	virtual int getArea() = 0;
};

class Oval : public Shape {

	string name;
	int a, b;

public:
	Oval(string name, int a, int b) {
		this->name = name;
		this->a = a;
		this->b = b;
	}

	string getName() {
		return name;
	}

	int getArea() {
		return (int)(a * b * 3.14);
	}
};

class Rect : public Shape {

	string name;
	int a, b;

public:
	Rect(string name, int a, int b) {
		this->name = name;
		this->a = a;
		this->b = b;
	}

	string getName() {
		return name;
	}

	int getArea() {
		return (int)(a * b);
	}
};

class Triangular : public Shape {

	string name;
	int a, b;

public:
	Triangular(string name, int a, int b) {
		this->name = name;
		this->a = a;
		this->b = b;
	}

	string getName() {
		return name;
	}

	int getArea() {
		return (int)(a * b * 0.5);
	}
};