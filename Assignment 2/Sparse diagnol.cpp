
#include <iostream>
using namespace std;
int main()
{

	int n;
	int k=0;
	cout<< "enter the side of 2d array:- ";
	cin >> (n);
	int *a = new int[n];
	int count=n;
	
	cout << "enter non-zero elemnts in array\n";
	for (int i = 0; i < n; i++)
	{
		cin >> (a[i]);
	}
	cout << "Array is :-";
	for (int i = 0; i < n; i++)
	{
		cout << "  " << (a[i]);
	}

   cout << "\n2d Array is :-\n";

	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(i==j)
			{
			  cout<<a[k]<< " ";
			  k++;
			}
			else
			cout<<0<<" ";
		}
		cout<<endl;
	}
		return 0;
	}