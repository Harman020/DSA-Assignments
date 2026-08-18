#include<iostream>
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
    for(int i=0;i<n;i++)
    {
    a[i]=new int[m];
    }
    
   
    for(int i=0;i<n;i++)
    {
         cout<<"Enter the elements of raw-"<<i<<endl;
        for(int j=0;j<m;j++)
        {
         cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
         cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
     for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=0;j<m;j++)
        {
         sum=sum+a[i][j];
        }
        cout<<"Sum of row "<<i<<":"<<sum;
        cout<<endl;
    }
    
     for(int i=0;i<m;i++)
    {
       int sum=0;
        for(int j=0;j<n;j++)
        {
         sum=sum+a[j][i];
        }
        cout<<"Sum of column "<<i<<":"<<sum;
        cout<<endl;
    }
    return 0;
}