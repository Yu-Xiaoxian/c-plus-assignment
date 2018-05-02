#include <iostream>
#include <string>
using namespace std;

template<class T, int MAX = 1000>
class Stack
{
private:
	T list[MAX + 1];
	int top;
public:
	Stack();
	void push(const T &item);//将item压栈
	T pop();//将栈顶元素弹出栈
	const T & peek() const;//访问栈顶元素
	bool isEmpty() const;//判断是否栈空
};
//请完成栈模板类的实现，并解决括号匹配问题
template<class T, int MAX>
Stack<T, MAX>::Stack() : top(-1) {
}

template<class T, int MAX>
void Stack<T, MAX>::push(const T &item) {
	list[++top];
}

template<class T, int MAX>
T Stack<T, MAX>::pop() {
	return list[top--];
}

template<class T, int MAX>
const T & Stack<T, MAX>::peek() const {
	return list[top];
}

template<class T, int MAX>
bool Stack<T, MAX>::isEmpty() const {
	return top == -1;
}

int main() {
	string str;
	Stack<char, 1000> ch_stack;
	cin >> str;
	for (char ch : str) {
		if (ch == '(')
			ch_stack.push(ch);
		else if (ch == ')') {
			if (ch_stack.isEmpty()) {
				cout << "No" << endl;
				return -1;
			}
			else
				ch_stack.pop();
		}
	}
	if (ch_stack.isEmpty()) {
		cout << "Yes" << endl;
		return 0;
	}
	else
	{
		cout << "No" << endl;
		return -2;
	}
}