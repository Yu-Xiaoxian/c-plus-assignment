#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
class Equation{
private:
    int _a, _b, _c;
public:
    Equation(int a, int b, int c):_a(a),_b(b),_c(c){
    }
    void solve(){
		double x1,x2;
		if(_a != 0){
			double delta = pow(fabs((double)_b),2) - 4 * _a * _c;
			//cout << "The delta is: " << delta << endl;
			if (delta > 0){
				cout << "1" << endl;
				x1 = (-_b-sqrt(delta))/2.0/_a;
				x2 = (-_b+sqrt(delta))/2.0/_a;
				if(_a > 0)
					cout << setiosflags(ios::fixed) << setprecision(2) << x1 << " " << x2 << endl;
				else
					cout << setiosflags(ios::fixed) << setprecision(2) << x2 << " " << x1 << endl;
			}
			else if(delta == 0){
				cout << "2" << endl;
				x1 = -_b/2.0/_a;
				cout << setiosflags(ios::fixed) << setprecision(2) << x1 << endl;
			}
			else if(delta < 0){
				cout << "3" << endl;
			}
		}
		else if(_b == 0){
			if(_c != 0){
				cout << "4" << endl;
			}
			else{
				cout << "5" << endl;
			}
		}
		else{
			x1 = -_c/1.0/_b;
			cout << "6" << endl;
			cout << setiosflags(ios::fixed) << setprecision(2) << x1 << endl;
			//printf("%.2f\n",x1);
		}
    }
};
int main(){
	while(true){
    int a, b, c;
    cin >> a >> b >> c;
    Equation tmp(a, b, c);
    tmp.solve();
	}
    return 0;
}