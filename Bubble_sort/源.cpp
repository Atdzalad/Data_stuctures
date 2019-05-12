#include<iostream>
using namespace std;

template<class T>
void Bubble(T* a, int n);
template<class T>
int Sort(T* a, int n);

int main()
{
	int a[10] = { 4,66,3,2,1,66,4,75,43,74 };
	int Stepcount = Sort(a, 10);
	for (int i = 0; i < 10; i++)
		cout << "a[" << i << ']' << '=' << a[i] << endl;
	cout << "Step:" << Stepcount << endl;
	return 0;

}

template<class T>
void Bubble(T* a, int n, int* Stepcount)
{
	int temp;
	for (int i = 0; i < n - 1; i++)
	{
		if (a[i] > a[i + 1])
		{
			temp = a[i + 1];
			a[i + 1] = a[i];
			a[i] = temp;
			*Stepcount += 3;
		}
	}
	return;
}

template<class T>
int Sort(T* a, int n)
{
	int* Stepcount = new int(0);
	for (int i = n; i > 1; i--)
	{
		Bubble(a, i, Stepcount);
	}
	return *Stepcount;
}
