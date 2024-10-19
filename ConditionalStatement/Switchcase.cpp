#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the character (A,B,C,D,E) : ";
    char button;
    cin>>button;
    switch(button){
        case 'A' : cout<<"Hello";
        break;
        case 'B' : cout<<"Namaste"<<endl;
        break;
        case 'C': cout<<"Hola"<<endl;
        break;
        case 'D': cout<<"Ciao"<<endl;
        break;
        case 'E': cout<<"Salut"<<endl;
        break;
        default : cout<<"Invalid Button\n";
        break;
    }
    return 0;
}