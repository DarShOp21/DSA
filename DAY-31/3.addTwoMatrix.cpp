#include<iostream>
using namespace std;

int main(){
    int arr1[3][3] = {1,2,3,4,5,6,7,8,9} , arr2[3][3] = {5,4,3,2,1,9,8,7,6} , ans[3][3];
    for(int row = 0 ; row < 3 ; row++){
        for(int col = 0 ; col < 3 ; col++){
            ans[row][col] = arr1[row][col] + arr2[row][col];
            cout << ans[row][col] << "  ";
        }
        cout << endl;
    } 
    return 0;
}
