#include "NamedCircle.cpp"

int main() {

	int r, max = 0;
	string n;

	NamedCircle pizza[5];

	cout << "5개의 정수 반지름과 원의 이름을 입력하세요" << endl;
	
	for (int i = 0; i < 5; i++) {
		cout << i + 1 << ">> ";
		cin >> r >> n;
		pizza[i] = NamedCircle(r, n);
	}

	for (int i = 1; i < 5; i++) {
		if (pizza[max].getRadius() < pizza[i].getRadius()) max = i;
	}

	cout << "가장 면적이 큰 피자는 " << pizza[max].getName() << "입니다." << endl;

	return 0;
}