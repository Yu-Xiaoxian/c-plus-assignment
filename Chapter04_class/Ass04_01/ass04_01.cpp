#include <iostream>
using namespace std;
class Integer {
private:
    int _num;
public:
//构造函数
    Integer(int num) :_num(num){
    }
//计算当前Integer 和 b之间的最大公约数
    int gcd(Integer b) {
		Integer modofb = b.modof(_num);
		if(modofb.shownum() == 0){
			return b.shownum();
		}
		else{
			return b.gcd(modofb);
		}
    }

	int shownum(){
		return _num;
	}

	Integer modof(int n){
		return Integer(n % _num);
	}
};
int main(){
	while(true){
    int a, b;
    cin >> a >> b;
    Integer A(a);
    Integer B(b);
    cout << A.gcd(B) << endl;
	}
    return 0;
}