#include <iostream>
using namespace std;

class Calculator {
public:
	virtual int add(int a, int b) = 0; // 두 정수의 합 리턴
	virtual int subtract(int a, int b) = 0; // 두 정수의 차 리턴
	virtual double average(int a[], int size) = 0; // 배열 a의 평균 리턴. size는 배열의 크기
};

class GoodCalc : public Calculator {
public:
	int add(int a, int b) {
		return a + b;
	}

	int subtract(int a, int b) {
		return a - b;
	}

	double average(int a[], int size) {
		int result = 0;
		for (int i = 0; i < size; i++)
			result += a[i];
		return (double)result / (double)size;
	}
};