#include <iostream>
using namespace std;
void printmin(int arr[5]);
int main(){
    int arr1[5] = {23,45,1,12,36};
    int arr2[5] = {73,85,12,13,34};
    printmin(arr1);
    printmin(arr2);
}
void printmin(int arr[5]){
    int min = arr[0];
    for (int i =0;i<5;i++){
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    cout<<"Printing the smallest Number :"<<min<<"\n";
}

