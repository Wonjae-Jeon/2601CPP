#include "Book.cpp"

bool operator==(Book book, int input);
bool operator==(Book book, string input);
bool operator==(Book book, Book input);

int main() {

	Book a("명품 C++", 30000, 500), b("고품 C++", 30000, 500);
	// price 비교
	if (a == 30000) cout << "정가 30000원" << endl;
	// 책 title 비교
	if (a == "명품 C++") cout << "명품 C++ 입니다." << endl;
	// title, price, pages 모두 비교
	if (a == b) cout << "두 책이 같은 책입니다." << endl;

	return 0;
}

bool operator==(Book book, int input) {
	return (book.price == input) ?  true : false;
}
bool operator==(Book book, string input) {
	return (book.title == input) ? true : false;
}
bool operator==(Book book, Book input) {
	if (book.title == input.title && book.price == input.price && book.pages == input.pages) return true;
	else return false;
}
