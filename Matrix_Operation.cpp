#include<iostream>
using namespace std;
int main()
{
    int a[100][100], b[100][100], i, j, m, n, p, q, ans;
    int c[100][100], result=0, ans_2, count=0;
    for(count=0; count<=1; count++)
    {
    cout<<"\nWhich operation do you want to do with the matrix ?\n";
    cout<<"\n1) Addition of tow matrix\n2) Subtraction of two matrix\n3) Transpose of a matrix\n4) Sum of the Diagonal Elements\n";
    cout<<"\nAnswer:";
    cin>>ans;
    switch(ans)
    {
        case 1:
            {
                cout<<"\nEnter the rows and columns for the first matrix:\n";
                cin>>m>>n;
                cout<<"\nNow Enter the elements of the first matrix:\n";
                for (i=0; i<m; i++)
                {
                    for(j=0; j<n; j++)
                    {
                        cin>>a[i][j];
                    }
                }
                cout<<"\nHence your first matrix will be:\n";
                for (i=0; i<m; i++)
                {
                    for(j=0; j<n; j++)
                    {
                        cout<<a[i][j];
                        cout<<"\t";
                    }
                    cout<<"\n";
                }
                cout<<"\nEnter the rows and columns for the second matrix:\n";
                cin>>p>>q;
                cout<<"\nNow Enter the elements of the second matrix:\n";
                for (i=0; i<p; i++)
                {
                    for(j=0; j<q; j++)
                    {
                        cin>>b[i][j];
                    }
                }
                cout<<"\nHence your second matrix will be:\n";
                for (i=0; i<p; i++)
                {
                    for(j=0; j<q; j++)
                    {
                        cout<<b[i][j];
                        cout<<"\t";
                    }
                    cout<<"\n";
                }
                if(m==p && n==q)
                {
                cout<<"\nTherefore addition of these matrix will be:\n";
                for (i=0; i<p; i++)
                {
                    for(j=0; j<q; j++)
                    {
                        c[i][j]=a[i][j]+b[i][j];
                        cout<<"\t";
                    }
                    cout<<"\n";
                }
                for (i=0; i<p; i++)
                {
                    for(j=0; j<q; j++)
                    {
                        cout<<c[i][j];
                        cout<<"\t";
                    }
                    cout<<"\n";
                }
                }
                else
                {
                    cout<<"\nAs rows and columns of both the matrix are not same addition can not be possible\n";
                }
                cout<<"\nDo you want tot do any another operations ?\n";
                cout<<"\nIf 'YES' enter '1' and if 'NO' enter '0'\n";
                cin>>ans_2;
                if (ans_2==1)
                {
                    count=0;
                }
                break;
            }
        case 2:
            {
                cout<<"\nEnter the rows and columns for the first matrix:\n";
                cin>>m>>n;
                cout<<"\nNow Enter the elements of the first matrix:\n";
                for (i=0; i<m; i++)
                {
                    for(j=0; j<n; j++)
                    {
                        cin>>a[i][j];
                    }
                }
                cout<<"\nHence your first matrix will be:\n";
                for (i=0; i<m; i++)
                {
                    for(j=0; j<n; j++)
                    {
                        cout<<a[i][j];
                        cout<<"\t";
                    }
                    cout<<"\n";
                }
                cout<<"\nEnter the rows and columns for the second matrix:\n";
                cin>>p>>q;
                cout<<"\nNow Enter the elements of the second matrix:\n";
                for (i=0; i<p; i++)
                {
                    for(j=0; j<q; j++)
                    {
                        cin>>b[i][j];
                    }
                }
                cout<<"\nHence your second matrix will be:\n";
                for (i=0; i<p; i++)
                {
                    for(j=0; j<q; j++)
                    {
                        cout<<b[i][j];
                        cout<<"\t";
                    }
                    cout<<"\n";
                }
                if(m==p && n==q)
                {
                cout<<"\nTherefore subtraction of these matrix will be:\n";
                for (i=0; i<p; i++)
                {
                    for(j=0; j<q; j++)
                    {
                        c[i][j]=a[i][j]-b[i][j];
                        cout<<"\t";
                    }
                    cout<<"\n";
                }
                for (i=0; i<p; i++)
                {
                    for(j=0; j<q; j++)
                    {
                        cout<<c[i][j];
                        cout<<"\t";
                    }
                    cout<<"\n";
                }
                }
                else
                {
                    cout<<"\nAs rows and columns of both the matrix are not same subtraction can not be possible\n";
                }
                cout<<"\nDo you want tot do any another operations ?\n";
                cout<<"\nIf 'YES' enter '1' and if 'NO' enter '0'\n";
                cin>>ans_2;
                if (ans_2==1)
                {
                    count=0;
                }
                break;
            }
        case 3:
            {
                cout<<"\nEnter the rows and columns for the matrix:\n";
                cin>>m>>n;
                cout<<"\nNow Enter the elements of the matrix:\n";
                for (i=0; i<m; i++)
                {
                    for(j=0; j<n; j++)
                    {
                        cin>>a[i][j];
                    }
                }
                cout<<"\nHence your matrix will be:\n";
                for (i=0; i<m; i++)
                {
                    for(j=0; j<n; j++)
                    {
                        cout<<a[i][j];
                        cout<<"\t";
                    }
                    cout<<"\n";
                }
                cout<<"\nThe transpose for the given matrix will be:\n";
                for (i=0; i<m; i++)
                {
                    for(j=0; j<n; j++)
                    {
                        c[i][j]=a[j][i];
                    }
                }
                for (i=0; i<m; i++)
                {
                    for(j=0; j<n; j++)
                    {
                        cout<<c[i][j];
                        cout<<"\t";
                    }
                    cout<<"\n";
                }
                cout<<"\nDo you want tot do any another operations ?\n";
                cout<<"\nIf 'YES' enter '1' and if 'NO' enter '0'\n";
                cin>>ans_2;
                if (ans_2==1)
                {
                    count=0;
                }
                break;
            }
        case 4:
            {
                cout<<"\nEnter the rows and columns for the matrix:\n";
                cin>>m>>n;
                cout<<"\nNow Enter the elements of the matrix:\n";
                for (i=0; i<m; i++)
                {
                    for(j=0; j<n; j++)
                    {
                        cin>>a[i][j];
                    }
                }
                cout<<"\nHence your matrix will be:\n";
                for (i=0; i<m; i++)
                {
                    for(j=0; j<n; j++)
                    {
                        cout<<a[i][j];
                        cout<<"\t";
                    }
                    cout<<"\n";
                }
                cout<<"\nTherefore sum of the diagonal elements will be:\n";
                for (i=0; i<m; i++)
                {
                    for(j=0; j<n; j++)
                    {
                        if(i==j)
                        {
                            result=result+a[i][j];
                        }
                    }
                }
                cout<<result;
                cout<<"\nDo you want tot do any another operations ?\n";
                cout<<"\nIf 'YES' enter '1' and if 'NO' enter '0'\n";
                cin>>ans_2;
                if (ans_2==1)
                {
                    count=0;
                }
                break;
            }
    }
    }
    return 0;
}
