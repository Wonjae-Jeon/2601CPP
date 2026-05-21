#include <iostream>
using namespace std;

class BaseArray {
private:
	int capacity; // 동적 할당된 메모리 용량
	int* mem; // 정수 배열을 만들기 위한 메모리 포인터
protected:
	BaseArray(int capacity = 100) {
		this->capacity = capacity; 
		mem = new int[capacity];
	}
	~BaseArray() { delete[] mem; }
	void put(int index, int val) { mem[index] = val; }
	int get(int index) { return mem[index]; }
	int getCapacity() { return capacity; }
};

class MyQueue : public BaseArray {
	int front = 0;
	int rear = 0;
public:
	MyQueue() : BaseArray(5) {}
	MyQueue(int a) : BaseArray(a) {}

	void enqueue(int n) {
		put(rear, n);
		rear++;
	}
	int dequeue() {
		int out = get(front);
		front++;
		return out;
	}

	int capacity() {
		return getCapacity();
	}

	int length() {
		return rear - front;
	}
	
};