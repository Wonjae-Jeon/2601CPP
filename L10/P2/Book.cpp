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
	string getTile() {
		return title;
	}

	//10-2
	friend Book& operator+=(Book& book, int price);
	friend Book& operator-=(Book& book, int price);
};

