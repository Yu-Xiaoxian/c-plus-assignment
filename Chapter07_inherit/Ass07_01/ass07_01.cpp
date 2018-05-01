#include <iostream>
#include <string>
using namespace std;

class Account
{
	string userName;
public:
	Account() {};
	Account(string name);
	void  PrintUserName();
};

class CreditAccount : public Account
{
public:
	CreditAccount(string name, int credit);
	void PrintInfo();
private:
	int credit;
};

//��ʵ��Account���캯��Account(char *name)
Account::Account(string name) :userName(name){
}
//��ʵ��Account��PrintUserName()����
void Account::PrintUserName() {
	cout << userName << endl;
}
//��ʵ��CreditAccount��Ĺ��캯��CreditAccount(char* name, long number)
CreditAccount::CreditAccount(string name, int credit) :Account(name), credit(credit){
}
//��ʵ��CreditAccount���PrintInfo()����
void CreditAccount::PrintInfo() {
	this->PrintUserName();
	cout << credit << endl;
}

int main()
{
	CreditAccount a("I Love CPP", 10000);
	a.PrintInfo();
	return 0;
}