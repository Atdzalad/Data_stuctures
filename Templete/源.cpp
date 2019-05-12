#include<iostream>
using namespace std;

template<class T>
int count(T* member,int n,int value);

int main()
{
	int a[5] = { 0,0,3,5,2 };
	int coun;
	coun = count(a, 5, 0);
	cout << coun;
	getchar();
	return 0;
}

template<class T>
int count(T* member,int n,int value)
{
	int count=0;
	while (n--)
	{
		if (member[n]==value)
		{
			count++;
		}
	}
	return count;
}