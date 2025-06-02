#include<iostream>
#include<vector>
#include<limits.h>

using namespace std;


//Approach 1 --> 
// In this solution, I used two auxiliary arrays (maxLeft and maxRight) to store the maximum building heights to the left and right of each bar. This helps efficiently calculate how much water can be trapped on top of each bar by using the formula:
// water = min(maxLeft, maxRight) - currentHeight.
// Finally, I looped through the array and summed up the trapped water at each index.

int trappingWater1(vector<int> arr){
    int size = arr.size();
    vector<int>maxLeft(size);
    vector<int>maxRight(size);

    //Logic for the maxLeft array 
    maxLeft[0] = 0;
    for(int i = 1 ; i < size ; i++){
        maxLeft[i] = max(maxLeft[i-1] , arr[i-1]);
    }

    //Logic for the maxRight array 
    maxRight[size-1] = 0;
    for(int i = size - 2 ; i >= 0 ; i--){
        maxRight[i] = max(maxRight[i+1] , arr[i+1]);
    }

    //Logic for traped water
    int trappedWater = 0;
    for(int i = 0 ; i < size ; i++){
        int minHeight =  (min(maxLeft[i],maxRight[i]) - arr[i]);
        if(minHeight >= 0){
            trappedWater += minHeight;
        }
    }
    return trappedWater;
}



//Approach 2 --> 
// In this solution, I first identified the index of the tallest bar (peak) in the array. This peak splits the problem into two parts — water trapped to the left of the peak and to the right of the peak.
// Then, I processed the array in two passes:
// From start to peak (left side), I tracked the highest bar (maxLeft) seen so far and used it to calculate trapped water at each index.
// From end to peak (right side), I did the same using a maxRight tracker.
// This avoids using extra space like auxiliary arrays, making the solution more space-efficient.

int trappingWater2(vector<int> arr){
    int MAX_Index = 0 , MAX = INT_MIN , size = arr.size();
    for(int i = 0 ; i < size ; i++){
        if(arr[i] > MAX){
            MAX = arr[i];
            MAX_Index = i ;
        }
    }

    int waterTrapped = 0 , maxLeft = 0 , maxRight = 0 ;
    //Logic for start to MAX_Index
    for(int i = 0 ; i < MAX_Index ; i++){
        int minHeight = maxLeft - arr[i];
        if(minHeight >= 0){
            waterTrapped += minHeight;
        }
        if(arr[i] > maxLeft){                   //Updating the maxLeft
            maxLeft = arr[i];                   
        }
    }

    //Logic for end to MAX_Index
    for(int i = size-1 ; i > MAX_Index ; i--){
        int minHeight = maxRight - arr[i];
        if(minHeight >= 0){
            waterTrapped += minHeight;
        }
        if(arr[i] > maxRight){                  //Updating the maxRight
            maxRight = arr[i];
        }
    }

    return waterTrapped;
}

int main(){
    int size ;
    cout << "Enter number of buildings : ";
    cin >> size;

    vector<int> arr(size);
    cout << "Enter the heights of " << size << " building : ";
    for(int i = 0 ; i < size ; i++){
        cin >> arr[i];
    }

    cout << "Trapped water using 1st method - " << trappingWater1(arr) << endl;
    cout << "Trapped water using 2nd method - " << trappingWater2(arr) << endl;

    return 0;

}