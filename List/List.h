#pragma once
#include "Library.h"

template<typename T>
class List {
private:
	class Node {
	public:
		T data;
		Node* nextPtr;
		Node* prevPtr;
		Node(T data) {
			this->data = data;
			this->nextPtr = nullptr;
			this->prevPtr = nullptr;
		}
	}*firstPtr, *lastPtr;
	size_t count;
public:
	List() { firstPtr = lastPtr = nullptr;
	count = 0;
	}
	void push_back(T data);
	void print();
	size_t size() { return count; }
	void push_front(T data);
	void removeLast();
	void removeFirst();
	bool find(T value);
	~List();
}; 