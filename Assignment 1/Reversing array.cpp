
#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the no. of elments :- ";
	cin>>(n);
	int* a=new int[n];
	cout<<"enter the "<<n<<" elements\n";
	for(int i=0; i<n; i++)
	{
		cin>>(a[i]);
	}
	cout<<"Array is :- ";
	for(int i=0; i<n; i++)
	{
		cout<<a[i]<<" ";
	}
	int i=0;
	int j=n-1;
	while(i<j)
	{
		a[i]=a[i]+a[j];
		a[j]=a[i]-a[j];
		a[i]=a[i]-a[j];

		i++;
		j--;
	}
	cout<<"\nReversed array :- ";
	for(int i=0; i<n; i++)
	{
		cout<<a[i]<<" ";
	}

	return 0;
}