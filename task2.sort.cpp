// Sort the arrey

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int arr[] = { 1, 8, 6 };
	int n = sizeof(arr) / sizeof(arr[0]);

	sort(arr, arr + n);

	cout << "\nSort: ";
	for (int i = 0; i < n; ++i)
		cout << arr[i] << " " ;
		cout <<"\n";

	return 0;
}

