#include <iostream>
using namespace std;

template <class T>
T* remove(T src[], int sizeSrc, T minus[], int sizeMinus, int& retSize);

int main() {
	// remove() 함수를 int로 구체화하는 경우
	cout << "정수 배열 {1,2,3,4}에서 정수 배열 {-3,5,10,1,2,3}을 뺍니다" << endl;
	int x[] = { 1,2,3,4 };
	int y[] = { -3,5,10,1,2,3 };
	int retSize;
	int* p = remove(x, 4, y, 6, retSize);
	if (retSize == 0) {
		cout << "모두 제거되어 리턴하는 배열이 없습니다." << endl;
		return 0;
	}
	else {
		for (int i = 0; i < retSize; i++) // 배열의 모든 원소 출력
			cout << p[i] << ' ';
		cout << endl;
		delete[] p; // 할당받은 배열 반환
	}
	// remove() 함수를 double로 구체화하는 경우
	// 이곳에 작성
	cout << "실수 배열 {1.1, 2.2, 3.3, 4.4}에서 실수 배열 {2.2, 4.4}를 뺍니다" << endl;
	double x_d[] = { 1.1, 2.2, 3.3, 4.4 };
	double y_d[] = { 2.2, 4.4 };
	int retSize_d;
	double* q = remove(x_d, 4, y_d, 6, retSize_d);
	if (retSize_d == 0) {
		cout << "모두 제거되어 리턴하는 배열이 없습니다." << endl;
		return 0;
	}
	else {
		for (int i = 0; i < retSize_d; i++) // 배열의 모든 원소 출력
			cout << q[i] << ' ';
		cout << endl;
		delete[] q; // 할당받은 배열 반환
	}
}

template <class T>
T* remove(T src[], int sizeSrc, T minus[], int sizeMinus, int& retSize) {

	bool* keep = new bool[sizeSrc];
	retSize = sizeSrc;

	for (int i = 0; i < sizeSrc; i++) {
		bool found = false;
		for (int j = 0; j < sizeMinus; j++) {
			if (src[i] == minus[j]) {
				found = true;
				retSize--;
				break;
			}
		}
		if (!found) {
			keep[i] = true;
		}
		else {
			keep[i] = false;
		}
	}

	if (retSize == 0) {
		delete[] keep;
		return nullptr;
	}

	T* result = new T[retSize];
	int index = 0;

	for (int i = 0; i < sizeSrc; i++) {
		if (keep[i]) {
			result[index] = src[i];
			index++;
		}
	}

	delete[] keep;
	return result;	
}