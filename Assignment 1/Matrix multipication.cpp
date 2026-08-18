
#include <iostream>
using namespace std;
int main()
{

	int n;
	int m;
	int p;
	cout<<"Enter the no of raws-";
	cin>>(n);
	cout<<"Enter the no of columns-";
	cin>>(m);
	int** a=new int*[n];
	for(int i=0; i<n; i++)
	{
		a[i]=new int[m];
	}
	cout<<"Enter the no of column for second matrix-";
	cin>>(p);
	int** b=new int*[m];
	for(int i=0; i<m; i++)
	{
		b[i]=new int[p];
	}

	int** c=new int*[n];
	for(int i=0; i<n; i++)
	{
		c[i]=new int[p];
	}


	cout<<"------Enter the elements of 1st matrix------"<<endl;

	for(int i=0; i<n; i++)
	{
		cout<<"Enter the elements of raw-"<<i<<endl;
		for(int j=0; j<m; j++)
		{
			cin>>a[i][j];
		}
	}

	cout<<"------Enter the elements of 2nd matrix------"<<endl;

	for(int i=0; i<m; i++)
	{
		cout<<"Enter the elements of raw-"<<i<<endl;
		for(int j=0; j<p; j++)
		{
			cin>>b[i][j];
		}
	}


	cout<<"First matrix is-"<<endl;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}

	cout<<"Second matrix is-"<<endl;
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<p; j++)
		{
			cout<<b[i][j]<<" ";
		}
		cout<<endl;
	}
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<p; j++)
		{
			int temp=0;
			for(int k=0; k<m; k++)
			{
				temp=temp+(a[i][k]*b[k][j]);
			}
			c[i][j]=temp;
		}
	}
	cout<<"Product matrix is :\n";
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<p; j++)
		{
			cout<<c[i][j]<<" ";
		}
		cout<<endl;
	}

	return 0;
}