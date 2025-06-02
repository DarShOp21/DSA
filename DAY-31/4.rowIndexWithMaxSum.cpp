#include<iostream>
#include<limits.h>

using namespace std;

int main(){
    int arr[4][3] = {10, 5 , 16 , 23, 23 ,56 , 11 , 23, 32 , 10 , 25 , 18};

    int MAX = INT_MIN, index;
    for(int row = 0 ; row < 4 ; row++){
        int  rowTotal = 0;
        for(int col = 0 ; col < 3 ; col++){
            rowTotal += arr[row][col];
        }
        if(rowTotal > MAX){
            MAX = rowTotal ;
            index = row;
        }
    }

    cout << index << endl;
    return 0;
}