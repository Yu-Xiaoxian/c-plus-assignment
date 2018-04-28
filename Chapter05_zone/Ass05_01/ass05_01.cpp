#include <iostream>
using namespace std;
  
class Yuebao
{
private:
	double balance;
	static double _profitRate;
public:
/* Your code here! */
	Yuebao(double init):balance(init){
	}
	Yuebao():Yuebao(0.0){}
	Yuebao(const Yuebao &y) {}
	void addProfit(){
		balance += balance*_profitRate;
	}
	void deposit(double amout){
		balance += amout;
	}
	void withdraw(double amout){
		balance -= amout;
	}
	double getBalance(){
		return balance;
	}
	static void setProfitRate(double rate){
		_profitRate = rate;
	}

	//Yuebao():Yuebao(0.0){}
};

double Yuebao::_profitRate = 0.0;
  
int main()
{
    int n;
    while(cin >> n)
    {
        double profitRate;
        cin >> profitRate;
        Yuebao::setProfitRate(profitRate);//�趨��������
        Yuebao y(0); //�½����˻�������ʼ��Ϊ0
        int operation;//���������ж��Ǵ滹��ȡ
        double amount;//���������ȡ���
        for (int i = 0; i < n; ++i)
        {
            y.addProfit();//����ǰһ������������Ϣ
            cin >> operation >> amount;
            if (operation == 0)
                y.deposit(amount);//������
            else
                y.withdraw(amount);//ȡ�����
        }
        cout << y.getBalance() << endl;//��������˻����
    }
    return 0;
}