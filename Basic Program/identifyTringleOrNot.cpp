#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter a Angles value ";
    cin>>a>>b>>c;

    int sum = a+b+c;

    if(sum==180)
    {
        cout<<"It is Tringle ";
    }
    else{
        cout<<"It is Not Tringle ";
    }
}