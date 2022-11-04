#include <iostream>
using namespace std;
void printmax(int arr[5]);
int main(){
    int arr1[5] = {23,45,1,12,36};
    int arr2[5] = {73,85,12,13,34};
    printmax(arr1);
    printmax(arr2);
}
void printmax(int arr[5]){
    int max = arr[0];
    for (int i =0;i<5;i++){
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    cout<<"Printing the Biggest Number :"<<max<<"\n";
}
z
