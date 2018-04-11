#include <iostream>
#include <cmath>

using namespace std;

bool isugly(int n){
	if(n == 1){
		return false;
	}
	else if(n == 2 || n == 3 || n == 5)
	{
		return true;
	}
	else if(n%2 == 0)
	{
		return isugly(n/2);
	}
	else if(n%3 == 0)
	{
		return isugly(n/3);
	}
	else if(n%5 == 0)
	{
		return isugly(n/5);
	}
	else
	{
		return false;
	}
	return true;
}

int main(){

	int n;
	while(true){
	cin >> n;
	if(isugly(n)){
		cout << "True" << endl;
	}
	else{
		cout << "False" << endl;
	}
	}
	return 0;
}