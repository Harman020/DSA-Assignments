#include <iostream>
using namespace std;
int main()
{
	int n;
	int high;
	int low;
	int mid;
	bool flag;
	cout << "enter the no of elements :- ";
	cin >> (n);
	int *a = new int[n];
	cout << "enter "<<n<<" sorted elemnts in array\n";
	for (int i = 0; i < n; i++)
	{
		cin >> (a[i]);
	}
	
	cout << "Array is :-";
	for (int i = 0; i < n; i++)
	{
		cout << "  " << (a[i]);
	}
	
	int i=0;
	int b=n;
	int k=0;
	while(k<b)
	{
	for(int i=0;i<b-1;i++)
	{
	     if(a[i]>a[i+1])
	     {
		   flag=false;
		   break;
	     }
	}
	   b--;
	}
	cout << "\nArray is not sorted ";

    if(flag)
	{
    int e;
	cout<<"\nenter the element to search :-";
	cin>>(e);
	low=0;
	high=n-1;
	
	
	while(low<=high)
	{
    	mid=(low+high)/2;
	
	    if(e==a[mid])
	    {
	     cout<<"element at position:-"<<mid;
	     break;
	    }
	    else if(e<a[mid])
	    {
	     high=mid-1;
	    }
	    else if(e>a[mid])
	    {
	     low=mid+1;
	    }
	}
}
	
	
	
	

    return 0;
}