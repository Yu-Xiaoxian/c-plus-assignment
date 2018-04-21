//第k最小数
#include <iostream>

using namespace std;

int main(){
	int n,k;
	int array[5000] = {0};

	cin >> n >> k;
	for(int i = 0; i < n; i++){
		cin >> array[i];
	}
	//冒泡排序法
	for(int i = 0; i < k; i++){
		for(int j = i+1; j < n; j++){
			if(array[i] > array[j]){
				int temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}

	cout << array[k-1] << endl;

	return 0;
}