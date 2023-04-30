#include<iostream>
using namespace std;
int main()
{
    int input;
    cout<<"Enter any number :";
    cin>>input;

    if(input>0)
    {
        cout<<"Number is Positive ";
    }
    else if(input<0){
        cout<<"Number is Negative ";
    }
    else{
        cout<<"Number is Zero ";
    }
}