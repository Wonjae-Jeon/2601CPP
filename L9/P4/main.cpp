/*
	Date: 20260507
	Lecture 9 - Problem 4
	cstring 라이브러리 사용해야함
*/

#include <iostream>
using namespace std;

#include "Book.h"

int main() {

	Book cpp("명품C++", 10000);
	Book java = cpp;

	cpp.show(); 
	java.show();
	
	java.set("명품자바", 12000);
	cout << "----------" << endl;

	cpp.show();
	java.show();

	return 0;
}