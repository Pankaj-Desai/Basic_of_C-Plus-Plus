#include<iostream>
using namespace std;
int main()
{
    char s1[100],s2[100],s3[100],temp;
    int j=0,i=0,length;
    cout<<"Enter string s1:";
    cin>>s1;
     //for concat()
    cout<<"Enter string s2:";
    cin>>s2;
    while(s1[i]!='\0')
        i++;
    while(s2[j]!='\0')
    {
        s1[i]=s2[j];
        j++;
        i++;
    }

    s1[i]='\0';
    cout<<"\nConcatenated String is :"<<s1;
    //for strcpy()
    for(i=0;s1[i]!='\0';++i)
    {
        s3[i]=s1[i];
    }
    s3[i]='\0';
    cout<<"\nThe copied string is:"<<s3;
    //for strlength()
    for(i=0;s1[i]!='\0';i++)
     {
         length=i+1;
     }
    cout<<"\nLength of the string "<<s1<<" is:"<<length;
    //for strrev()
    j=length-1;
    for(i=0;i<j;i++,j--)
    {
        temp=s1[i];
        s1[i]=s1[j];
        s1[j]=temp;
    }
    cout<<"\nThe Reverse of String:"<<s1;


}
