#include<iostream>
using namespace std;
int main()
{
int n,i;
cout<<"enter the degree of polynomial you want to enter";
cin>>n;
int a[n+1],b[n+1];
cout<<"enter the first polynomial"<<endl;
for(int i=0;i<n+1;i++)
{
cout<<"enter the coeeficent of x^"<<i<<":-";
cin>>a[i];
cout<<endl;
}
cout<<"enter the second polynomial"<<endl;
for(int i=0;i<n+1;i++)
{
cout<<"enter the coeeficent of x^"<<i<<":-";
cin>>b[i];
cout<<endl;
}
int c[n];
int sum;
for(int i=0;i<n+1;i++)
{
int sum=0;
c[i]=a[i]+b[i];
}
cout<<"enter the addition of the polynmial is";
for(int i=0;i<n+1;i++)
{
if(i==n)
{
cout<<c[i]<<"x^"<<i;
}
else
{
cout<<c[i]<<"x^"<<i<<"+";
}
}
int d[(2*(n+1))-1];
for(int i=0;i<n+1;i++)
{
for(int j=0;j<n+1;j++)
{
d[i+j]+=a[i]*b[j];
}
}
cout<<endl;
cout<<"the product of two polynomial is:";
for(i=0;i<n+1;i++)
{
if(i==2*n)
{
cout<<d[i]<<"x^"<<i;
}
else
{
cout<<d[i]<<"x^"<<i<<"+";
}
}
}


