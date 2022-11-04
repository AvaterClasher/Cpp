#include <iostream>
using namespace std;
void printArray(int arr[5]);
int main(){
    int arr1[5] = {10,20,30,40,50};
    int arr2[5] = {23,45,56,67,89}; 
    printArray(arr1);
    printArray(arr2);
}
void printArray(int arr[5]){
    cout<<"Printing the array :"<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<"\n";
    }
}