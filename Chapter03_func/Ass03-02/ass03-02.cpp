#include <iostream>
#include <cmath>

using namespace std;

int fibonacci(int n){
	if(n == 0)
		return 1;
	else if(n == 1)
	{
		return 1;
	}
	else{
		return fibonacci(n-1) + fibonacci(n-2);
	}
}

int main(){

	int n;
	//while(true){
	cin >> n;
	cout << fibonacci(n) << endl;
	//}
	return 0;
}