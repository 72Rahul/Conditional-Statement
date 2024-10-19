//WAP to find the maximum number among 3 number.

#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cout<<"Enter the first number : ";
    cin>>a;
    cout<<"Enter the second number : ";
    cin>>b;
    cout<<"Enter the third number : ";
    cin>>c;
    //condition check
    if(a>b && a>c){
        cout<<"The greatest number is : "<<a<<endl;
    }
    else if(b>a && b>c){
        cout<<"The greatest number is : "<<b<<endl;
    }
    else{cout<<"The greatest number is : "<<c<<endl;
    }
    if(a<b){
        if(a<c){
            cout<<"The minimum number is : "<<a<<endl;
        }
        else {
            cout<<"The minimum number is : "<<c<<endl;
        }
    }
    else {
        cout<<"The minimum number is : "<<b<<endl;
    }

    return 0;
}