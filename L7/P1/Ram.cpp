#include "Ram.h";
#include <iostream>
using namespace std;

Ram::Ram() {
	size = 100 * 1024;
	mem[size] = { 0, };
}

Ram::~Ram(){
	cout << "메모리 제거됨" << endl;
}

char Ram::read(int address) {
	if (address < 0 || address >= 1024 * 100)
		return '\0';
	else
		return mem[address];
}

void Ram::write(int address, char value) {
	if (address < 0 || address >= 1024 * 100)
		cout << "메모리 주소 벗어남. 주소를 확인하세요" << endl;
	else
		mem[address] = value;
}