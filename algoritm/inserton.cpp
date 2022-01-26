#include <iostream>

int main() 
{
	const int N =10;
	int a[N] = {4, 88, 5, 77, 23, 57, 36, 13, 12, 74 };

	int buff = 9;
	int i, j;


	for (i = 1; i < N; i++)
	{
		buff = a[i];
	for (j = i - 1; j >= 0 && a[j] > buff; j--)
			a[j + 1] = a[j];

			a[j + 1] = buff;
	}
	for (int i = 0; i < N; i++)
	std::cout << a[i] <<" ";
	std::cout <<"\n";
}
