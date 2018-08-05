#include <iostream>
#include <stdexcept>
#include <cmath>
#include <iomanip>

using namespace std;

/*ÍêÉÆ´Ëº¯Êý*/
double calArea(double a, double b, double c) {
	if(a < 0 || b < 0 || c < 0)
		throw invalid_argument("The input is illegal");
	if (a + b <= c || a + c <= b || c + b <= a)
		throw invalid_argument("The input is illegal");
	if (a != b && b != c && a != c)
		throw invalid_argument("The input is illegal");
	else {
		double p = (a + b + c) / 2;
		double area = sqrt(p * (p - a)*(p - b)*(p - c));
		return area;
	}
}

int main() {
	double a, b, c;
	cin >> a >> b >> c;
	try {
		double area = calArea(a, b, c);
		cout << fixed << setprecision(2) << area << endl;
	}
	catch (exception& e) {
		cout << e.what() << endl;
	}
}