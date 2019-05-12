#include<iostream>
using namespace std;
int main()
{
	int row, columns;
	cin >> row >> columns;
	int* (*r);
	r = new int* [row];
	for(int i=0;i<row;i++)
	{
		r[i] = new int[columns] {0};
	}
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			cout << 'r' << '[' << i << ']' << '[' << j << ']' << '=' << r[i][j] << endl;
		}
	}
	
	for (int i = 0; i < row; i++)
	{
		delete[]r[i];
	}
	delete[]r;
	return 0;
}