#include<iostream>
using namespace std;
int main()
{
	int n;
	bool match;

	cout<< "enter the no of elements :- ";
	cin >> (n);
	int *a = new int[n];
	int count=n;
	
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
	
    for (int i = 0; i < n-1; i++)
    {
        	for (int j = i+1; j < n; j++)
        	{
        	  if(a[i]==a[j])
        	  {
        	   count--;
        	  }
        	}
    }
    cout<<"\nnumber of distinct elemnts "<<count;
    
    
    
    
    return 0;
}