#include <iostream>
#include <iomanip>
#include <cmath>
#include <Windows.h>
using namespace std;

class Point1{
private:
	double _x, _y;
public:
	Point1() :_x(0.0), _y(0.0) {
		//cout << "Calling the default Constructor of Point1" << endl;
	}
	Point1(double a, double b) : _x(a), _y(b) {
		//cout << "Calling the Constructor of Point1" << endl;
	}
	Point1(Point1 &p): _x(p.getX()), _y(p.getY()) {
		//cout << "Calling th copy Constructor of Point1" << endl;
	}
	double getX() {
		return _x;
	}
	double getY() {
		return _y;
	}
	/*Point1& operator=(Point1 &p) {
		cout << "Calling the operator '=' of Point1" << endl;
		return p;
	}*/
};

class Point2 {
private:
	double _x, _y;
public:
	Point2() :_x(0.0), _y(0.0) {
		//cout << "Calling the default Constructor of Point2" << endl;
	}
	Point2(double a, double b) : _x(a), _y(b) {
		//cout << "Calling the Constructor of Point2" << endl;
	}
	Point2(Point2 &p) {
		_x = p.getX();
		_y = p.getY();
		//cout << "Calling th copy Constructor of Point2" << endl;
	}
	double getX() {
		return _x;
	}
	double getY() {
		return _y;
	}
	/*Point2& operator=(Point2 &p) {
		cout << "Calling the operator '=' of Point2" << endl;
		return p;
	}*/
};

class Line1 {
private:
	Point1 A, B;
public:
	Line1():A(0.0, 0.0), B(0.0, 0.0){
		//cout << "Calling the default Constructor of Line1" << endl;
	}
	Line1(Point1 &a, Point1 &b): A(a), B(b){
		//cout << "Calling the Constructor of Line1" << endl;
	}
	//Line1(Line1 &l): A(l.getA()), B(& l.getB()){}
	Line1(Line1 &l) {
		A = l.getA();
		B = l.getB();
	}
	const Point1 getA() {
		return A;
	}
	const Point1 getB() {
		return B;
	}
	void display() {
		cout << "A; " << A.getX() << ". B: " << B.getX() << endl;
	}
};

class Line2 {
private:
	Point2 A, B;
public:
	Line2() :A(0.0, 0.0), B(0.0, 0.0) {
		//cout << "Calling the default Constructor of Line2" << endl;
	}
	Line2(Point2 &a, Point2 &b) {
		Point2 A = a;
		Point2 B = b;
		//cout << "Calling the Constructor of Line2" << endl;
	}
	Line2(Line2 &l) {
		A = l.getA();
		B = l.getB();
	}
	Point2 getA() {
		return A;
	}
	Point2 getB() {
		return B;
	}
	void display() {
		//cout << "A; " << A.getX() << ". B: " << B.getX() << endl;
	}
};

int main(){
	cout << "-------------------------Part I-----------------------------" << endl;
	cout << "In this part, the default Constructor of line will be called" << endl;
	Line1 l1;
	Line2 l2;

	cout << "-------------------------Part II----------------------------" << endl;
	cout << "In this part, the Constructor of point will be called" << endl;
	Point1 p1(2.0, 3.0);
	Point2 p2(2.0, 3.0);

	cout << "------------------------Part III----------------------------" << endl;
	cout << "In this part, the Constructor of line will be called" << endl;
	Line1 l3(p1, p1);
	Line2 l4(p2, p2);
	l3.display();
	l4.display();

	cout << "------------------------Part IV----------------------------" << endl;
	cout << "In this part, the time will be counted" << endl;
	double time1 = 0;
	double time2 = 0;
	double counts = 0;
	LARGE_INTEGER nFreq1, nFreq2;
	LARGE_INTEGER nBeginTime1, nBeginTime2;
	LARGE_INTEGER nEndTime1, nEndTime2;
	QueryPerformanceFrequency(&nFreq1);
	QueryPerformanceCounter(&nBeginTime1);//开始计时  
	//...测试代码
	Line1 ls1[10000];
	for (int i = 0; i < 10000; i++) {
		ls1[i] = l1;
	}
	QueryPerformanceCounter(&nEndTime1);//停止计时  
	time1 = (double)(nEndTime1.QuadPart - nBeginTime1.QuadPart) / (double)nFreq1.QuadPart;//计算程序执行时间单位为s

	QueryPerformanceFrequency(&nFreq2);
	QueryPerformanceCounter(&nBeginTime2);//开始计时  
	//...测试代码
	Line2 ls2[10000];
	for (int i = 0; i < 10000; i++) {
		ls2[i] = l2;
	}
	QueryPerformanceCounter(&nEndTime2);//停止计时  
	time2 = (double)(nEndTime2.QuadPart - nBeginTime2.QuadPart) / (double)nFreq2.QuadPart;//计算程序执行时间单位为s  

	cout << "Time cost of Line1：" << time1 * 1000 << "ms" << endl;
	cout << "Time cost of Line2：" << time2 * 1000 << "ms" << endl;
    return 0;
}