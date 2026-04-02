#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {

	vector<string> name;
	string input, result;

	cout << "이름 5개 입력" << endl;

	for (int i = 0; i < 5; i++) {
		cout << i + 1 << ">>";
		getline(cin, input);
		name.push_back(input);
	}

	result = name[0];

	for (int i = 1; i < 5; i++) {
		if (result < name[i]) result = name[i];
	}

	cout << "사전에서 가장 뒤에 나오는 문자열은 " << result << endl;

	return 0;
}