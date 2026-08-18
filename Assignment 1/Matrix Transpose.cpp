
#include <iostream>
using namespace std;
int main()
{

	int n;
	int m;
	cout<<"Enter the no of raws-";
	cin>>(n);
	cout<<"Enter the no of columns-";
	cin>>(m);
	int** a=new int*[n];
	for(int i=0; i<n; i++)
	{
		a[i]=new int[m];
	}

	for(int i=0; i<n; i++)
	{
		cout<<"Enter the elements of raw-"<<i<<endl;
		for(int j=0; j<m; j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}


	if (n==m)
	{
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<m; j++)
			{
				if(j>i)
				{
					int temp=a[i][j];
					a[i][j]=a[j][i];
					a[j][i]=temp;
				}
			}
		}
		cout<<"Array after tranpose :\n";
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<m; j++)
			{
				cout<<a[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	else {
		cout<<" for transpose Array should have equal no of rows and columns\a";
	}

	return 0;
}