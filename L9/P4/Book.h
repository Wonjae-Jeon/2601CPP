#pragma once
class Book {
	char* title; // 제목 문자열
	int price; // 가격
public:
	Book(const char* title, int price);
	Book(Book&);
	~Book();
	void set(const char* title, int price);
	void show();
};