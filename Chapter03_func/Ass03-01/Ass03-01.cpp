/* students please write your program here */
#include <iostream>
using namespace std;

int main() {
    int num;
	int temp;
    int sum = 0;
	int min = 89000;
	int max = 0;
    
    //cout << "Please Input the  of numbers:" << endl;
    cin >> num;
	//while(num > 100)
	//{
		//cout << "The number should lower than 100, please input again";
		//cin >> num;
	//}

    //cout << "Please Input the numbers:" << endl;
	
	for(int i=0; i < num; i++)
	{
		cin >> temp;
		sum += temp;
		max = max>temp? max:temp;
		min = min<temp? min:temp;
	}
	/*
	min = a[0];
	max = a[0];

	for(int i=0; i < num; i++)
	{
		sum += a[i];
		min = a[i]<min?a[i]:min;
		max = a[i]>min?a[i]:max;
	}
	*/
    
    //cout<<"The sum, max, min number of input are:"<<endl;
    cout<< sum << ' ' << min <<' '<<  max  <<  endl;

	return 0;
}