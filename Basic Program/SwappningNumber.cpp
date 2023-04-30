#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
    cout<<"Enter a First Number :";
    cin>>a;
    cout<<"Enter a Second number :";
    cin>>b;

    temp=a;
    a=b;
    b=temp;

    cout<<"Afterswappning First Number "<<a<<endl;
    cout<<"After swappning Second Number "<<b<<endl;

}
