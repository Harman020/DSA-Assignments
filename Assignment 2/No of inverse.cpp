#include<iostream>
using namespace std;
int main()
{
	int n;
	int count=0;

	cout<< "enter the no of elements :- ";
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
	
    for (int i = 0; i < n-1; i++)
    {
       	for (int j = 1; j < n; j++)
       	{
       	if(i<j&a[i]>a[j])
       	{
       	count++;
       	}
        }
    }
    
    cout<<"\nno of inversions -"<<count;
       	
	
	
 return 0;
}