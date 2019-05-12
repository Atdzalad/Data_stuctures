#include<iostream>
#include<numeric>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int* array = new int[n];
	for (int i = 0; i < n; i++)
	{
		array[i] = i;
	}
	int sum = 0;
	sum = accumulate(array, array + n, sum);
	cout << sum;
	return 0;
}