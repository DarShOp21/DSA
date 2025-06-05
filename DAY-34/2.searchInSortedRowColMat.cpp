#include<iostream>
#include<vector>

using namespace std;

bool searchTarget(vector<vector<int>> sortedRowColMat ,int target){
    int row = sortedRowColMat.size();
    int col = sortedRowColMat[0].size();

    int end = col-1 , down = 0;

    while (end >= 0 && down <= row-1){
        if(sortedRowColMat[down][end] == target)
        return true;
        else if(sortedRowColMat[down][end] > target )
        end--;
        else 
        down++;
    }
    return false;
}

int main(){
    int row = 5 , col = 5 , target ;
    vector<vector<int>>sortedRowColMat= {{4, 8, 15, 25, 60},{18, 22, 26, 42, 80},{36, 40, 45, 68, 104},{48 , 50, 72 , 83 , 130},{70 , 99 , 114 , 128 , 170}};

    cout <<"Enter the target value : ";
    cin >> target;

    cout << searchTarget(sortedRowColMat , target) << endl;

    return 0;
}