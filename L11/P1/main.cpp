#include "NamedCircle.cpp"

int main() {

	Circle c1;
	cout << "<C1>" << endl;
	c1.showRadius();
	cout << "C1 반지름 변경" << endl;
	c1.setRadius(2);
	c1.showRadius();
	cout << " --------------------" << endl;
	NamedCircle waffle("waffle");
	cout << "<waffle>" << endl;
	waffle.show();
	cout << "waffle 반지름 변경" << endl;
	waffle.setRadius(3);
	waffle.show();
	cout << "waffle 이름 변경" << endl;
	waffle.setName("choco waffle");
	waffle.show();
	cout << " --------------------" << endl;
	cout << "<donut>" << endl;
	NamedCircle donut(5, "donut");
	donut.show();

	return 0;
}