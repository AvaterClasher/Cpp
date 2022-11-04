#include <iostream>
using namespace std;
int main(){
    int number = 30;
    int *p;
    p=&number;
    cout<<"Address of Number variable :"<<&number<<endl;
    cout<<"Address of P variable is :"<<p<<endl;
    cout<<"Value of P variable is :"<<*p<<endl;
}