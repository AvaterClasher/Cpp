#include <iostream>
using namespace std;
int main(){
    int test[3][3];
    test[0][0] = 56;
    test[0][1] = 67;
    test[0][2] = 89;
    test[1][0] = 9;
    test[1][1] = 67;
    test[1][2] = 34;
    test[2][0] = 55;
    test[2][1] = 23;
    test[2][2] = 12;
    for (int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<test[i][j]<<" ";
        }
        cout<<"\n";
    }
}