#include<iostream>
using namespace std;
int main(){
    int arr[200] , target , size;
    cout << "Enter the size of the array : ";
    cin >> size;

    cout << "Enter the elements of array in ascending order : ";
    for(int i = 0 ; i < size ; i++){
        cin >> arr[i];
    }

    cout << "Enter the target (Diff of two numbers) : ";
    cin >> target;

    //In this approach -->
    // 1. Initialize the value of start and end with 0 and 1 respectively
    // 2. arr[end] - arr[start] == target then "Solution find"
    // 3. arr[end] - arr[start] < target then end++ (If the diff is less than target than we will increase the value from which we have to subtract i.e end)
    // 4. arr[end] - arr[start] > target then start++ (If the diff is greater than solution than we will increase the value which i ssubtracted i.e start)

    int start = 0 , end = 1 ;
    while(end < size){
        if(arr[end] - arr[start] == target){
            cout << arr[end] << " " << arr[start] << endl;
            break;
        } else {
            if(arr[end] - arr[start] < target){
                end++;
            }else{
                start++;
            }
        }
    }

    if(end == size){
        cout << "Ans not found ..." << endl;
    }
    return 0;
}