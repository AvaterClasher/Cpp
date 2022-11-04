#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number to check :";
    cin>>num;
    if (num<0||num>100){
        cout<<"---> Wrong Number";
    }
    else if(num>=0 && num<50){
        cout<<"---> Failed";
    }
    else if(num>=51 && num<60){
        cout<<"---> D Grade";
    }
    else if(num>=61 && num<70){
        cout<<"---> C Grade";
    }
    else if(num>=71 && num<80){
        cout<<"---> B Grade";
    }
    else if(num>=81 && num<90){
        cout<<"---> A Grade";
    }
    else if(num>=91 && num<=100){
        cout<<"---> A+ Grade";
    }
}