#define _CRT_SECURE_NO_WARNINGS
#include "Book.h"
#include <iostream>
#include <cstring>
using namespace std;

Book::Book(const char* title, int price) {
	//cout << "생성자" << endl;
	//this->title = title;
	
	int len = strlen(title);
	this->title = new char[len + 1];
	strcpy(this->title, title);
	this->price = price;
}

Book::Book(Book& book) {
	//cout << "복사생성자" << endl;
	this->title = book.title;
	this->price = book.price;
}

Book::~Book() {
	if (title) delete[] title;
}

void Book::set(const char* title, int price) {
	//cout << "set" << endl;
	//this->title = title;

	int len = strlen(title);
	this->title = new char[len + 1];
	strcpy(this->title, title);

	this->price = price;
}

void Book::show() {
	cout << title << ' ' << price << "원" << endl;
}