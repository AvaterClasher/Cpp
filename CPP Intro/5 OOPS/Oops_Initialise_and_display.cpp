#include <iostream>
using namespace std;
class Student{
    public:
    int id;
    string name;

    void insert(int i,string n){
        id = i;
        name = n;

    }
    void display(){
        cout<<id<<" "<<name<<endl;
    }
};
int main(void){
    Student s1;
    Student s2;
    s1.insert(23,"Nachi");
    s2.insert(34,"Harshit");
    s1.display();
    s2.display();
    return 0;
}