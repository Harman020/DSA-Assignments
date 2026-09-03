
#include <iostream>
using namespace std;
int main()
{

	int n;
	int k=0;
	cout<< "enter the side of 2d array:- ";
	cin >> (n);
	int m = (n*(n+1))/2;
	int *a = new int[m];
	int count=n;
	
	cout << "enter non-zero elemnts in array\n";
	for (int i = 0; i < m; i++)
	{
		cin >> (a[i]);
	}
	cout << "Array is :-";
	for (int i = 0; i < m; i++)
	{
		cout << "  " << (a[i]);
	}

   cout << "\nSparse matrix is :-\n";

	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(i>=j)
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