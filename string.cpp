#include<iostream>
#include<string.h>
using namespace std;
int main ()
{
    //printing string with define size no need to add /0
    char name[7]={'R','U','P','E','s','H'};
    //printing size without size so now we have to define /0
    char Name[]={'R','U','P','E','s','H','\0'};
    //printing string in double queate 
    char NM []="RUPESH";
    cout<<name<<endl;
    cout<<Name<<endl;
    cout<<NM<<endl;
    //taking input from user 
    char age [15];
    cout << "please enter yout age in charachter"<<endl;
    gets(age);
    cout<<"your age in char is -:"<<age<<endl;
    //counting the length of an string 
    cout<<"the length of yout string is :-"<<strlen(age)<<endl;
    //counting the memomery accupied by the string 
    cout<<"the size taken by the string in memomery:-"<<sizeof(age)<<endl;
    //Printing string in capital case 
    cout << "steing in capital latters:-"<<strupr(age)<<endl;
    //Printing string in lower case 
    cout << "steing in capital latters:-"<<strlwr(age)<<endl;
    //reversing the string 
    cout<<"Reverse the string "<<strrev(age)<<endl;
}