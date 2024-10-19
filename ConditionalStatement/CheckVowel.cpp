//Program to check if an alphabet is a vowel or a consonant.
#include<iostream>
using namespace std;
int main (){
    char ch;
    cout<<"Enter the alphabet: ";
    cin>>ch;
    char alphabet = ch=='a'|| ch=='e' || ch=='i'|| ch=='o' || ch=='u' || ch=='A'|| ch=='E' || ch=='I'|| ch=='O' || ch=='U';
    if(alphabet){
        cout<<"Vowel\n";
    }
    else{
        cout<<"Consonant\n";
    }
    return 0;
}