#include <iostream>
using namespace std;
class employee {
    public:
    int id;
    float salary;
    string name;
    void insert(int i,float a,string b){
        id = i;
        salary = a;
        name = b;
    }
    void display(){
        cout<<id<<" "<<name<<" "<<salary<<"\n";
    }
};
int main(void){
    employee e1;
    employee e2;
    e1.insert(12,234.0,"Gandu");
    e2.insert(123,233545.0,"Harami");
    e1.display();
    e2.display();
    return 0;
}