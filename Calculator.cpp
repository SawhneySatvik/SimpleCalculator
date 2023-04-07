#include<iostream>

using namespace std;

int main(){

    double a,b,c;
    char A;

    cout<<"**********CALCULATOR**********"<<endl;

    cout<<"Enter the operand you'd like to use(+,-,*,/)";
    cin>>A;

    cout<<"Enter a number 1:";
    cin>>a;
    cout<<"Enter a number 2:";
    cin>>b;

    switch (A)
    {
    case '+':
        c=a+b;
        cout<<a<<'+'<<b<<'='<<c<<endl;
        break;
    case '-':
        c=a-b;
        cout<<a<<'-'<<b<<'='<<c<<endl;
        break;
    case '*':
        c=a*b;
        cout<<a<<'*'<<b<<'='<<c<<endl;
        break;
    case '/':
        c=a/b;
        cout<<a<<'/'<<b<<'='<<c<<endl;
        break;
    
    default:
        cout<<"Wonrg input, rey something else!"<<endl;
        break;
    }

}