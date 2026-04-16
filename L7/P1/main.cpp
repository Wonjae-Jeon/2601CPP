#include <iostream>
using namespace std;

#include "Ram.h"

int main() {

	Ram ram;
	ram.write(100, 20);
	ram.write(101, 30);
	char res = ram.read(100) + ram.read(101);
	ram.write(102, res);

	cout << "102번지의 값= " << (int)ram.read(102) << endl;

	ram.write(-1, -1);
	ram.write(1024 * 100, 42);
	cout << ram.read(1024 * 100);

	return 0;
}