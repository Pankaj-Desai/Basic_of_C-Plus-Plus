#include<iostream>
using namespace std;
int main ()
{
 char a[6] = { '1', '3', 'a', 's', 't', 'i' };
 int con;
 for (int i = 0; i < 6; i++)
  {
  for (int j = 0; j < 6; j++)
{
for (int k = 0; k < 6; k++)
 {
for (int l = 0; l < 6; l++)
{
cout<<a[i]<<a[j]<<a[k]<<a[l]<<" ";
con++;
}
}
}
}
cout<<con;
}
