#include <iostream>

using namespace std;

int main(){
	int n;
	int array[5000] = {0};
	int sum = 0;
	int max_sum = -5000;

	cin >> n;
	for(int i=0; i<n; i++){
		cin >> array[i];
	}

	for(int i=0; i<n; i++){
		sum = array[i];
		for(int j=i+1; j<n; j++){
			sum += array[j];
			if(max_sum < sum) max_sum = sum;
		}
	}

	cout << max_sum;

	return 0;
}