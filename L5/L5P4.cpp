#include <iostream>
#include <string>
using namespace std;

int main() {

	string s;
	string find, replace;
	size_t locate;

	cout << "여러 줄의 문자열을 입력하세요. 입력의 끝은 &문자입니다." << endl;
	getline(cin, s, '&');
	cin.ignore();

	cout << "find: ";
	getline(cin, find);

	cout << "replace: ";
	getline(cin, replace);

	locate = s.find(find);
	if (locate == string::npos) {
		cout << "cannot find" << endl;
		return -1;
	}
	else {
		while (locate!=string::npos) {
			s.replace(locate, find.length(), replace);
			locate = s.find(find, locate + replace.length());
		}
	}
	cout << s << endl;

	return 0;
}