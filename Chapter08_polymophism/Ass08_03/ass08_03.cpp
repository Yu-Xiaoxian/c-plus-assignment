#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;

class Shape {
public:
	Shape() {}
	virtual ~Shape() {}
};

class Triangle : public Shape {
public:
	Triangle() {}
	~Triangle() {}
};

class Rectangle : public Shape {
public:
	Rectangle() {}
	~Rectangle() {}
};

/*用dynamic_cast类型转换操作符完成该函数*/
int getVertexCount(Shape * b) {
	if (dynamic_cast<Shape*>(b) == NULL) {
		return 1;
	}
	else if (dynamic_cast<Triangle*>(b) == b) {
		return 3;
	}
	else if (dynamic_cast<Rectangle*>(b) == b) {
		return 4;
	}
	else if (dynamic_cast<Shape*>(b) == b) {
		return 0;
	}
}

int main() {
	Shape s;
	cout << getVertexCount(&s) << endl;
	Triangle t;
	cout << getVertexCount(&t) << endl;
	Rectangle r;
	cout << getVertexCount(&r) << endl;
}