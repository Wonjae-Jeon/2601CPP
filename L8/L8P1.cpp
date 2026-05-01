//문제1

#include <iostream>
using namespace std;

class Circle {
	int radius; // 원의 반지름 값
public:
	void setRadius(int radius); // 반지름을 설정한다.
	double getArea(); // 면적을 리턴한다.
};

int main(void) {

	Circle circle[3];
	int input;
	int count = 0;

	for (int i = 0; i < 3; i++) {
		cout << "원 " << i + 1 << "의 반지름 >> ";
		cin >> input;
		circle[i].setRadius(input);
		if (circle[i].getArea() > 100) count++;
	}

	cout << "면적이 100보다 큰 원 " << count << "개입니다." << endl;

	return 0;
}

void Circle::setRadius(int radius){
	this->radius = radius;
}

double Circle::getArea() {
	return (double)radius * radius * 3.14;
}
