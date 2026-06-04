#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {

	set <int> myset;
	cout << "myset에 추가할 정수의 값을 5개 입력하세요" << endl;
	// myset에 값 넣기
	for (int i = 0; i < 5; i++) {
		cout << i + 1 << "번 값 >> ";
		int input;
		cin >> input;
		myset.insert(input);
	}

	// myset 내용 출력
	set<int>::iterator it;
	cout << "myset 출력: ";
	// iterator it를 사용하여 for문 작성할 것
	for (it = myset.begin(); it != myset.end(); ++it) {
		// it 출력
		cout << *it << ' ';
	}
	cout << endl;
	
	// myset에서 가장 작은 값
	it = min_element(myset.begin(), myset.end()); // 최소값을 찾기 위해 min_element 함수 활용
	cout << "myset에서 가장 작은 값 : " << *it << endl;
	
	// myset에서 가장 큰 값
	it = max_element(myset.begin(), myset.end()); // 최대값을 찾기 위해 max_element 함수 활용
	cout << "myset에서 가장 큰 값 : " << *it << endl;
	
	// myset에서 값 검색하기
	cout << "검색할 정수의 값을 입력하세요 >> ";
	int num; cin >> num;
	it = myset.find(num); // num 값을 찾기 위해 find 함수 활용
		
	if (it != myset.end()) // find 함수의 return 값을 활용하여 값이 있는지 없는지 판별
		cout << "해당 값이 myset에 있습니다." << endl;
	else	
		cout << "해당 값이 myset에 없습니다." << endl;

	// copy 함수를 사용하여 myset을 복사한 myvec 추가 및 출력
	vector<int> myvec;
	copy(myset.begin(), myset.end(), back_inserter(myvec));

	cout << "copy 후 vector 출력: ";
	for (const auto& output : myvec) {
		cout << output << ' ';
	}
	cout << endl;


	return 0;
}