#include <iostream>

using namespace std;

int main(){
	int n;
	int sum = 0;
	int max_sum = -5000;

	cin >> n;

	int * p = new int[n];

	for(int i=0; i<n; i++){
		cin >> p[i];
	}

	for(int i=0; i<n; i++){
		sum = p[i];
		for(int j=i+1; j<n; j++){
			sum += p[j];
			if(max_sum < sum) max_sum = sum;
		}
	}

	cout << max_sum;

	delete p;

	return 0;
}