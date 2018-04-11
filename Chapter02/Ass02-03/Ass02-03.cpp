#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int n;
	cout<<"Please input the size of rhombus(the size should between 1 to 10):"<<endl;
	cin>>n;

	if(n>10){
		return -1;
	}
	else if(n<1)
	{
		return -1;
	}

	for(int i=1;i<2*n;i++){
		for(int j=0; j<abs(n-i); j++){
			cout<<" ";
		}
		for(int j=0; j<2*(n-abs(n-i))-1; j++){
			cout<<"*";
		}
		cout<<endl;
	}

	return 0;
}