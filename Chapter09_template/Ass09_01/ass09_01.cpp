#include <iostream>
using namespace std;

/*请在这里填充代码*/
template<typename T>
T getSum(T *arr, int size) {
	T sum = 0;
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}
	return sum;
}

int main()
{
	int n, m;
	cin >> n >> m;
	int* arr_int = new int[n];
	double* arr_double = new double[m];
	for (int i = 0; i < n; ++i)
		cin >> arr_int[i];
	for (int i = 0; i < m; ++i)
		cin >> arr_double[i];
	cout << getSum(arr_int, n) << endl;
	cout << getSum(arr_double, m) << endl;
	return 0;
}