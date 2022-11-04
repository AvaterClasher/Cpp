#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>
using namespace std;
std::list<std::int>li = {2,3,4};
class Stack{
    public:
    int a;
    std::list<std::int>li = {2,3,4};
    int h;
    void push(int elet){
        h = elet;
        li.push_back(h);
        cout<<"The latest element is"<<" "<<h<<endl;
    }
    void show(){
        cout<<li<<endl;
    }
    void pop(){
        cout<<"The element popped out is"<<"\n"<<endl;
        li.back();
        li.pop_back();
    }
    void sort(){
        li.sort()
        cout<<"The rearranged list is"<<" "<<li<<endl;
    }
    void size(){
        li.size();
    }
};
int main(){
    int i=0;
    int j=3;
    Stack s;
    while(j<6){
        cout<<"The Functions for List (Enter the Value)"<<"\n"<<"1. Push"<<"\n"<<"2. Show"<<"\n"<<"3. Pop"<<"\n"<<"4. Sort"<<"\n"<<"5. Size"<<"\n"<<"6. Exit"<<endl;
        cin>>i;
        if (i==1){
            cout<<"You have chosen 1. Push\n"<<"Enter the desired element :";
            cin>>elet;
            s.push(elet);
        }
        if (i==2){
            cout<<"You have chosen 2. Show\n";
            s.show();
        }
        if (i==3){
            cout<<"You have chosen 3. Pop\n";
            s.pop();
        }
        if (i==4){
            cout<<"You have chosen 4. Sort\n";
            s.sort();
        }
        if (i==5){
            cout<<"You have chosen 5. Size\n";
        }
        if (i==6){
            cout<<"You have exited the code"<<endl;
            break;
        }
    
    }
}

