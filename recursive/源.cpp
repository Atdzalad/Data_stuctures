#include<iostream>
using namespace std;

int Fibonacci(int* sto, int n);
int main(void)
{
	int n;
	cin >> n;
	int* sto = new int[n];
	Fibonacci(sto, n);
	for (int i = 0; i < n; i++)
	{
		cout << "sto" << '[' << i << ']' << '=' << sto[i] << endl;
	}
	return 0;
}

int Fibonacci(int* sto, int n)
{
	if (n == 0)
	{
		sto[n] = 0;
		return 0;
	}
	else if (n == 1)
	{
		sto[n] = 1;
		sto[n - 1] = 0;
		return 1;
	}
	else
	{
		sto[n] = Fibonacci(sto, n - 1) + Fibonacci(sto, n - 2);
		return sto[n];
	}
}