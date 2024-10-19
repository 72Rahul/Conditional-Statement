#include<iostream>
using namespace std;
int main(){
    int a, b;
    cout<<"Enter the first number : ";
    cin>>a;
    cout<<"Enter the second number : ";
    cin>>b;
    cout<<"Enter the operator (+,-,*,/,%)";
    char ch;
    cin>>ch;
    switch(ch){
        case '+': cout<<a<<" + "<<b<<" = "<<a+b;
        break;
        case '-': cout<<a<<" - "<<b<<" = "<<a-b;
        break;
        case '*': cout<<a<<" * "<<b<<" = "<<a*b;
        break;
        case '/': cout<<a<<" / "<<b<<" = "<<a/b;
        break;
        case '%': cout<<a<<" % "<<b<<" = "<<a%b;
        break;
        default : cout<<"Invalid"<<endl;
        break;
    }
}