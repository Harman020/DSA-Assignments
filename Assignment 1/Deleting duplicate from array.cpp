
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the no. of elments :- ";
    cin>>(n);
    int* a=new int[n];
    cout<<"enter the "<<n<<" elements\n";
    for(int i=0;i<n;i++)
    {
    cin>>(a[i]);
    }
    cout<<"Array is :- ";
    for(int i=0;i<n;i++)
    {
    cout<<a[i]<<" ";
    }
     int i=0;
     int j=1;
     while(i<n-1)
     {
         if(a[i]==a[j])
         {
             for(int k=j;k<n;k++)
             {
                 a[k]=a[k+1];
             }
             n=n-1;
         }
         i++;
         j++;
     }
    cout<<"\nArray after deleting duplicate :- ";
    for(int i=0;i<n;i++)
    {
    cout<<a[i]<<" ";
    }
     
    return 0;
}