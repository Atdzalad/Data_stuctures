#include<iostream>
using namespace std;

//template<class T>
void  Metrix_trans(int **a, int rows);

int main()
{
	int Array[10][10];
	int Value = 0;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			Array[i][j] = Value;
			Value++;
		}
	}
	Metrix_trans(Array, 10);
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << Array[i][j] << endl;
		}
	}
	return 0;
}

//template<class T>
void Metrix_trans(int **a, int rows)
{
	T Temp;
	for (int i = 0; i < rows; i++)
	{
		for (int j = i + 1; j < rows; j++)
		{
			Temp = a[i][j];
			a[i][j] = a[j][i];
			a[j][i] = Temp;
		}
	}
	return;
}