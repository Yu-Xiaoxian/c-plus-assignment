#include <iostream>
using namespace std;
 
class Integer{
private:
    int _num;
//getLength()������ȡ_num����
    int getLength(){
		int _temp = _num;
		int i = 0;
		while(_temp != 0){
			_temp /= 10;
			i++;
		}
		return i;
    }
public:
//Integer�๹�캯��
	Integer(int num):_num(num){
    }
//��ת_num
    int inversed(){
		int _inverse = 0;
		int _temp = _num;
		for(int i = 0; i < getLength(); i++){
			_inverse = _inverse * 10 + (_temp % 10);
			_temp = _temp / 10;
		}
		return _inverse;
    }
};
 
int main() {
    while(true){
	int n;
    cin >> n;
    Integer integer(n);
    cout << integer.inversed() << endl;
	}
    return 0;
}