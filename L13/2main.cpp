#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> a;
	vector<int> b;
	cout << "A 반의 점수를 입력하세요(3개) " << endl;
	for (int i = 0; i < 3; i++) {
		// 입력: 50 -90 80
		// vector에 값 추가
		int input = 0;
		cin >> input;
		a.push_back(input);
	}
	cout << "B 반의 점수를 입력하세요(3개)" << endl;
	for (int i = 0; i < 3; i++) {
		// 입력: 60 40 75
		// vector에 값 추가
		int input = 0;
		cin >> input;
		b.push_back(input);
	}
	// auto를 사용하여 값 출력
	cout << "A반 점수" << endl;
	for (const auto& output : a) {
		cout << output << ' ';
	}
	cout << endl;
	cout << "B반 점수" << endl;
	for (const auto& output : b) {
		cout << output << ' ';
	}
	cout << endl;

	cout << "A 점수 변경" << endl;
	replace(a.begin(), a.end(), -90, 90); // -90을 90으로 변경
	// 변경된 A 벡터 출력
	for (const auto& output : a) {
		cout << output << ' ';
	}
	cout << endl;
	
	//cout << a.size() + b.size();

	// A반과 B반 데이터 합치기
	vector<int> result;
	//merge(a.begin(), a.end(), b.begin(), b.end(), back_inserter(result));
	result = a;
	result.insert(result.end(), b.begin(), b.end());

	// A반 점수와 B반 점수를 합친 결과 (result) 출력
	cout << "A반 점수와 B반 점수를 합친 결과: ";
	for (const auto& output : result) {
		cout << output << ' ';
	}
	cout << endl;

	
	// result의 최대값과 최소값 출력 (min_element, max_element 사용)
	cout << "최소값: " << *min_element(result.begin(), result.end()) << ", 최대값: " << *max_element(result.begin(), result.end()) << endl;

	// 합친 vector를 오름차순과 내림차순으로 정렬하여 각각 출력하기
	cout << "A반 점수와 B반 점수를 합친 vector 오름차순 정렬: ";
	sort(result.begin(), result.end());
	for (const auto& output : result) {
		cout << output << ' ';
	}
	cout << endl;
	cout << "A반 점수와 B반 점수를 합친 vector 내림차순 정렬: ";
	sort(result.begin(), result.end(), greater<int>());
	for (const auto& output : result) {
		cout << output << ' ';
	}
	cout << endl;

	// remove + erase 함수를 사용하여 ‘50' 제거하기
	result.erase(remove(result.begin(), result.end(), 50), result.end());
	
	// vector 출력
	cout << "50점을 제거한 결과: ";
	for (const auto& output : result) {
		cout << output << ' ';
	}
	cout << endl;
}