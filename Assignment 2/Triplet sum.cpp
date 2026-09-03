
#include <iostream>
using namespace std;
class triplet
{
public:
	int row, col, val;

	void input(int r,int c,int v)
	{
		row=r;
		col=c;
		val=v;
	}
};
int main() {
	int n,r,c,v,ro,co,n1;
	cout<<"Enter the no. of rows and colums of matrices\n";
	cin>>ro;
	cin>>co;
	
	
	cout<<"Enter the number of non Zero elements of first matrix-";
	cin>>n;
	
	triplet *t=new triplet[n];
	for(int i=0; i<n; i++)
	{
		cout<<"Enter the row , column,value of non Zero elments\n";
		cin>>r;
		cin>>c;
		cin>>v;
		t[i].input(r,c,v);

	}
	cout<<"triplet reprentation-\n";
	for(int i=0; i<n; i++)
	{
		cout<<t[i].row<<" "<<t[i].col<<" "<<t[i].val;
		cout<<endl;
	}
		cout<<"matrix  :-\n";
		
	int k=0;
	for(int i=0; i<ro; i++)
	{
		for(int j=0; j<co; j++)
		{
			if(j==t[k].col&&i==t[k].row)
			{
				cout<<t[k].val<<" ";
				k++;
			}
			else {
				cout<<0<<" ";
			}
		}
		cout<<endl;

	}

   	cout<<"Enter the number of non Zero elements of second matrix-";
	cin>>n1;
	triplet *t1=new triplet[n1];
	
	for(int i=0; i<n1; i++)
	{
		cout<<"Enter the row , column,value of non Zero elments\n";
		cin>>r;
		cin>>c;
		cin>>v;
		t1[i].input(r,c,v);

	}
	cout<<"triplet reprentation-\n";
	for(int i=0; i<n1; i++)
	{
		cout<<t1[i].row<<" "<<t1[i].col<<" "<<t1[i].val;
		cout<<endl;
	}
	
	cout<<"matrix  :-\n";
	 k=0;
	for(int i=0; i<ro; i++)
	{
		for(int j=0; j<co; j++)
		{
			if(j==t1[k].col&&i==t1[k].row)
			{
				cout<<t1[k].val<<" ";
				k++;
			}
			else {
				cout<<0<<" ";
			}
		}
		cout<<endl;
	}
 
	cout<<"Sum matrix :-\n";
	k=0;
	int k1=0;
	for(int i=0; i<ro; i++)
	{
		for(int j=0; j<co; j++)
		{   
		    int sum=0;
		    
			if(i==t[k].row&&j==t[k].col)
			{
			    sum = t[k].val;
			    k++;
			}
			
			if(i==t1[k1].row&&j==t1[k1].col)
			{
			    sum = sum + t1[k1].val;
			    k1++;
			}
            cout<<sum<<" ";
		}
		cout<<endl;
	}
		


	return 0;
}