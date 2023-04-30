#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter a First Number :";
    cin>>a;
    cout<<"Enter a Second number :";
    cin>>b;
    cout<<"Enter a Third Number :";
    cin>>c;

    if(a>b)
    {
        if(a>c)
        {
            cout<<"A is greater and i.e "<<a;
        }
        else{
            cout<<"C is greater and i.e "<<c;
        }
    }
    else if(b>c)
    {
        cout<<"B is greater and i.e "<<b;
    }
    else{
        cout<<"C is greater and i.e "<<c;
    }
}