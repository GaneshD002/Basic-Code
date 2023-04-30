#include<iostream>
using namespace std;
int main()
{
    int input, sum=0;
    cout<<"Enter a number :";
    cin>>input;

    for(int i=0; i<=input; i++)
    {
        sum+=i;
    }
    cout<<sum;
}