#include <iostream>
using namespace std;
int main(){
    int age=0;
    cout<<"Enter the age :";
    cin>>age;
    ineligible:cout<<"You are not eligible to vote...\n";
    if (age < 18){
        goto ineligible;
    }
    else{
        cout<<"You are Eligible to vote..";
    }
}