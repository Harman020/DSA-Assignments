#include <iostream>
using namespace std;
int main()
{
	int n;
	int k;
	int r;
	cout << "enter the no of elements :- ";
	cin >> (n);
	int *a = new int[n];
	cout << "enter "<<n<<" elemnts in array\n";
	for (int i = 0; i < n; i++)
	{
		cin >> (a[i]);
	}
	cout << "Array is :-";
	for (int i = 0; i < n; i++)
	{
		cout << "  " << (a[i]);
	}

	cout << "\nenter the positons to rotate array :- ";
	cin >> (k);
	cout << "Enter 1 for left  rotation\nEnter 2 for right rotation\n";
	cin >> r;
	if (r == 1)
	{
		for (int i = 0; i < k; i++)
		{
			int temp = a[0];
			for (int i = 0; i <= n; i++)
			{
				a[i] = a[i + 1];
			}
			a[n-1]=  temp;
		}
	}
	else if (r == 2)
	{
		for (int i = 0; i < k; i++)
		   {
		   int temp=a[n-1];
			for (int i = n - 2; i >= 0; i--)
			{
				a[i + 1] = a[i];
			}
				a[i] =  temp;
			}
		
	}
	else
	{
		cout<<"wrong choice";
	}

	cout << "Array is :-";
	for (int i = 0; i < n; i++)
	{
		cout << "  " << (a[i]);
	}

	return 0;
};