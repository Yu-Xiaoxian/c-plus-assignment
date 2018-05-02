#include <iostream>
using namespace std;

template <class T>
int binSearch(T arr[], int n, T key);

/*请实现折半查找，并按顺序输出被访问的元素下标*/
template <class T>
int binSearch(T arr[], int n, T key) {
	int low, high, mid;
	low = 0;
	high = n - 1;
	while (low <= high) {
		mid = (int)((low + high) / 2);
		cout << mid << endl;
		if (arr[mid] == key)
			return mid;
		else if (arr[mid] < key)
			low = mid + 1;
		else
			high = mid - 1;
	}
		return -1;
}

int main()
{
	int n, m;
	int key1;
	double key2;
	cin >> n >> m >> key1 >> key2;
	int* arr_int = new int[n];
	double* arr_double = new double[m];
	for (int i = 0; i < n; ++i)
		cin >> arr_int[i];
	for (int i = 0; i < m; ++i)
		cin >> arr_double[i];
	binSearch(arr_int, n, key1);
	binSearch(arr_double, m, key2);
	return 0;
}