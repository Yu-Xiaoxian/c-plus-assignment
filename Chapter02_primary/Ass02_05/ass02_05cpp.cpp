/*students please write your program here*/
#include <iostream>

using namespace std;

int main() {
	int a, b;
	char s;

	cin >> a >> b >> s;

	if (s == '+') cout << a + b;
	if (s == '-') cout << a - b;
	if (s == '*') cout << a * b;
	if (s == '/') cout << a / b;
	if (s == '%') cout << a % b;

	return 0;
}