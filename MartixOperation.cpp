#include<iostream>
using namespace std;
int main()
{
    int a[100][100],i,j,c=0,n,m,f,larg,sm,p;
    cout<<"\nEnter the number of rows and columns you want:\n";
    cin>>m>>n;
    cout<<"Enter the elements of matrix A -";
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
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
   for (i = 0; i < m; i++)
    {
        p = 0;
        sm = a[i][0];
        for (j = 0; j < n; j++)
        {
            if (sm >= a[i][j])
            {
                sm = a[i][j];
                p = j;
            }
        }
        larg = 0;
        for (j = 0; j < n; j++)
        {
            if (larg < a[j][p])
            {
                larg = a[j][p];
            }
        }
        if (sm == larg) {
            cout << "\nValue of Saddle Point :" << sm;
            f = 0;
        }
    }

    if (f > 0)
    {
        cout << "\nNo Saddle Point ";
    }
    return 0;
}
