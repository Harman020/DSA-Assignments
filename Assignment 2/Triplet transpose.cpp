
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
	int n,r,c,v;
	cout<<"Enter the number of non Zero elements-";
	cin>>n;
	triplet *t=new triplet[n];
	for(int i=0; i<=n; i++)
	{
		cout<<"Enter the row , column,value of non Zero elments\n";
		cin>>r;
		cin>>c;
		cin>>v;
		t[i].input(r,c,v);

	}
	cout<<"triplet reprentation-\n";
	for(int i=0; i<=n; i++)
	{
		cout<<t[i].row<<" "<<t[i].col<<" "<<t[i].val;
		cout<<endl;
	}
		cout<<"matrix  :-\n";
	int k=1;
	for(int i=0; i<t[0].row; i++)
	{
		for(int j=0; j<t[0].col; j++)
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
	cout<<"triplet reprentation after transpose-\n";
	for(int i=0; i<=n; i++)
	{
		int temp= t[i].row;
		t[i].row=t[i].col;
		t[i].col=temp;
		cout<<t[i].row<<" "<<t[i].col<<" "<<t[i].val;
		cout<<endl;
	}

	int b=n;
	while(b>1)
	{
		for(int i=1; i<b; i++)
		{
			if(t[i].row > t[i+1].row)
			{
				triplet temp=t[i];
				t[i]=t[i+1];
				t[i+1]=temp;
			}
		}
		b--;
	}
	cout<<"triplet reprentation sorted-\n";
	for(int i=0; i<=n; i++)
	{
		cout<<t[i].row<<" "<<t[i].col<<" "<<t[i].val;
		cout<<endl;
	}

	cout<<"matrix after transpose :-\n";
	 k=1;
	for(int i=0; i<t[0].row; i++)
	{
		for(int j=0; j<t[0].col; j++)
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



	return 0;
}