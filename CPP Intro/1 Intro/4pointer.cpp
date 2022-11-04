#include <iostream>
using namespace std;
int main(){
    int a[] = {2,13,46,56,89};
    int *ptr;
    ptr = a;
    ptr = ptr+4;
    std::cout<<"Value of second element of an array :"<<*ptr<<std::endl;
}