#include"List.h"

template<typename T>
void List<T>::push_back(T data){
	if (count == 0) {
		firstPtr = new Node(data);
		lastPtr = firstPtr;
	}
	else {
		lastPtr->nextPtr = new Node(data);
		lastPtr = lastPtr->nextPtr;
	}
	count++;
}

template<typename T>
void List<T>::print() {
	Node *curPtr = firstPtr;
	cout << curPtr->data << endl;
	while (curPtr != lastPtr) {
		curPtr = curPtr->nextPtr;
		cout << curPtr->data << endl;
		
	}
}

template<typename T>
void List<T>::push_front(T data){
	if (count == 0) {
		firstPtr = new Node(data);
		lastPtr = firstPtr;
	}
	else {
		Node *e = new Node(data);
		e->nextPtr = firstPtr;
		firstPtr = e;
	}
	count++;
}

template<typename T>
void List<T>::removeLast()
{
	if (count == 0) {
		delete firstPtr;
		firstPtr = nullptr;
		lastPtr = nullptr;
	}
	else
	{
		Node *curPtr = firstPtr;
		while (curPtr->nextPtr != lastPtr)
		{
			curPtr = curPtr->nextPtr;
		}
		delete lastPtr;
		lastPtr = curPtr;
		curPtr->nextPtr = nullptr;
	}
	count--;
}

template<typename T>
void List<T>::removeFirst()
{
	Node *temp;
	Node* current = lastPtr;
	current = firstPtr;
	temp = firstPtr->nextPtr;
	delete current;
	firstPtr = temp;
	temp->prevPtr = NULL;
}

template<typename T>
List<T>::~List()
{
	Node* curPtr;
	Node n = *firstPtr;

	curPtr = firstPtr;
	delete curPtr;

	while (n.nextPtr != lastPtr) {
		curPtr = n.nextPtr;
		n = *curPtr;
		delete curPtr;
		}
}

template<typename T>
bool List<T>::find(T value)
{
	Node *curPtr = firstPtr;
	while (curPtr != lastPtr)
	{
		if (curPtr->data == value)
		{
			return 1;
		}
		curPtr = curPtr->nextPtr;
	}
	return 0;
}