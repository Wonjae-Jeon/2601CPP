#include "Book.cpp"

int main() {

	Book book("벼룩시장", 0, 50); // 가격은 0
	if (!book) cout << "공짜다" << endl;

	return 0;
}