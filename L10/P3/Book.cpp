#include <iostream>
using namespace std;

class Book {
	string title;
	int price;
	int pages;
public:
	Book(string title = "", int price = 0, int pages = 0) {
		this->title = title; this->price = price; this->pages = pages;
	}
	void show() {
		cout << title << ' ' << price << "원 " << pages << " 페이지" << endl;
	}
	string getTitle() {
		return title;
	}

	//10-3
	bool operator==(int price) {
		return (this->price == price) ? true : false;
	}
	bool operator==(string title) {
		return (this->title == title) ? true : false;
	}
	bool operator==(Book book) {
		if (this->title == book.title && this->price == book.price && this->pages == book.pages) return true;
		else return false;
	}
};