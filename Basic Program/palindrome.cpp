#include<iostream>
using namespace std;
int main()
{
    int r,n,temp,sum=0;
    cout<<"Enter a number :";
    cin>>n;
    temp=n;

    while(n>0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    if(sum==temp)
    {
        cout<<"Palindrome";
    }
    else{
        cout<<"Not Palindrome";
    }
}