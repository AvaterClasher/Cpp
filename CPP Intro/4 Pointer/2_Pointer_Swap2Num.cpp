#include <iostream>
using namespace std;
int main()
{
int a=12,b=45,*p1 = &a,*p2 = &b;
cout<<"Before swap"<<*p1<<"And"<<*p2<<endl;
*p1=*p1+*p2;
*p2=*p1-*p2;
*p1=*p1-*p2;
cout<<"After swap"<<*p1<<"And"<<*p2<<endl;
    return 0;
}