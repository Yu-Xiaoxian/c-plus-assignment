//Stack.h
#ifndef STACK_H
#define STACK_H
#include <cassert> 
template <class T, int SIZE = 50>
class Stack {
private:
	T list[SIZE];
	int top;
public:
	Stack();
	void push(const T &item);
	T pop();
	void clear();
	const T &peek() const;
	bool isEmpty() const;
	bool isFull() const;
};

//模板的实现
template <class T, int SIZE>
Stack<T, SIZE>::Stack() : top(-1) { }
template <class T, int SIZE>
void Stack<T, SIZE>::push(const T &item) {
	assert(!isFull());
	list[++top] = item;
}
template <class T, int SIZE>
T Stack<T, SIZE>::pop() {
	assert(!isEmpty());
	return list[top--];
}
template <class T, int SIZE>
const T &Stack<T, SIZE>::peek() const {
	assert(!isEmpty());
	return list[top];   //返回栈顶元素
}
template <class T, int SIZE>
bool Stack<T, SIZE>::isEmpty() const {
	return top == -1;
}
template <class T, int SIZE>
bool Stack<T, SIZE>::isFull() const {
	return top == SIZE - 1;
}

template <class T, int SIZE>
void Stack<T, SIZE>::clear() {
	top = -1;
}

#endif  //STACK_H
