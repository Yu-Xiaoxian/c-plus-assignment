#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

double power (double x, int n); //计算x的n次方

int main() {
    int  value = 0;
    //cout << "Enter an 10 bit binary number  ";
	string ch;
    cin >> ch;
	int len = ch.length();
	reverse(ch.begin(),ch.end());
    for (int i = 0; i < len; i++) {
      if (ch[i] == '1')
        value += static_cast<int>(power(2, i));
    }
    cout << value << endl;
    return 0;
}
double power (double x, int n) {
    double val = 1.0;
    while (n--) 
      val *= x;
    return val;
}