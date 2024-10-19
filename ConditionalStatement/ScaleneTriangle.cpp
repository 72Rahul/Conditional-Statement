
// Program to check if a triangle is scalene, isosceles or equilateral.
#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cout<<"Enter the sides of Triangle: "<<endl;
    cin>>a>>b>>c;
    if(a==b && b == c){
        cout<<"Equilateral Triangle\n";
    }
    else if(a == b || b==c || c == a){
        cout<<"Isosceles Triangle\n";
    }
    else {
        cout<<"Scalene Triangle\n";
    }
    return 0;
}