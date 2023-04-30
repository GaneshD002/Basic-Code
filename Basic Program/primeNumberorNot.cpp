#include<iostream>
using namespace std;
int main()
{
    int input, count=0;
    cout<<"Eneter a number :";
    cin>>input;

    for(int i=1; i<=input; i++)
    {
        if(input%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        cout<<"Given number is prime ";
    }
    else{
        cout<<"Given number is not prime ";
    }
}