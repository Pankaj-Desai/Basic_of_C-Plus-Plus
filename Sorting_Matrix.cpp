#include<iostream>
using namespace std;
int main()
{
    int a[100][100],i,j,c=0,b[100][100],sum=0,m,n,d;
    cout<<"\nEnter the numbers of row and column you want in your matrix:\n";
    cin>>m>>n;
    cout<<"\nEnter the elements of matrix A -\n";
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0;i<m;i++)                      //Logic for Upper triangular matrix
    {
       for (j=0;j<n;j++)
       {
       if((a[i][j]==0)&&(i>j))
       c++;
       }
    }
    for(i=0;i<m;i++)                      //Logic for lower triangular matrix
    {
       for (j=0;j<n;j++)
       {
       if((a[i][j]==0)&&(i<j))
       d++;
       }
    }
    if(c>=3)
    {
        cout<<"\nMatrix is an upper triangular Matrix\n";
    }
    else if(d>=3)
     {
        cout<<"\nIt is an lower triangular Matrix\n";
     }
     else
     {
         cout<<"\nTheir is no upper or lower triangular matrix\n";
     }
      for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<a[i][j];
            cout<<"\t";
        }
        cout<<"\n";
    }
     for(i=0;i<m;i++)
     {
         for(j=0;j<n;j++)
         {
             if(i==j)
             {
                 sum = sum + a[i][j];
             }
         }
     }
     cout<<"\n Summation of Diagonal Elements is -"<<" \n"<<sum;
      for(i=0;i<m;i++)
      {
            for (j=0;j<n;j++)
            {
                b[i][j]=a[j][i];
            }
      }
cout<<"\n Transpose Matrix is \n";
for(i=0;i<m;i++)
{
cout<<"\n";
for(j=0;j<n;j++)
{
cout<<b[i][j]<<"\t";
}
}
}
