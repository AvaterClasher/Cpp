#include <iostream>
using namespace std;
int main(){
    int a = 9;
    int b = 23;
    swap(a,b);
    std::cout<<"The value of A :"<<a<<std::endl;
    std::cout<<"The value of B :"<<b<<std::endl;
    return 0;
}
void swap(int &p,int &q){
    int temp;
    temp = p;
    p=
}