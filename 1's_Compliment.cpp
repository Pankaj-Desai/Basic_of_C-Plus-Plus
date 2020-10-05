#include<iostream>
using namespace std;
int main()
{
    int len,i;
    string binary,ones;

    cout<<"Enter binary numbers:";
    cin>>binary;

    len=binary.length();
    ones.resize(len);

    for(i=0;i<len;i++)
    {
        if(binary[i]=='0')
            ones[i]='1';
        else
            ones[i]='0';
    }

    cout<<"\nOne's Complement is :"<<ones;
}
