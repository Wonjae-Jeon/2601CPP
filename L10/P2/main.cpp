#include "Book.cpp""
//10-2
Book& operator+=(Book& book, int price);
Book& operator-=(Book& book, int price);

int main() {

	Book a("청춘", 20000, 300), b("미래", 30000, 500);
	a += 500; // 책 a의 가격 500원 증가
	b -= 500; // 책 b의 가격 500원 감소
	a.show();
	b.show();

	return 0;
}
//10-2
Book& operator+=(Book& book, int price) {
	book.price += price;
	return book;
}
Book& operator-=(Book& book, int price) {
	book.price -= price;
	return book;
}