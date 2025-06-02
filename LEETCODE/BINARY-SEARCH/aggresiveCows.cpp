#include<iostream>
using namespace std;
class Solution {
    public:
  
      int aggressiveCows(vector<int> &arr, int k) {
          sort(arr.begin() , arr.end());
          int start = 1 , end , mid , ans;
          end = arr[(arr.size()-1)] - arr[0];
          
          while(start <= end){
              mid = start + (end - start)/2;
              int count = 1 , pos = arr[0];
              for(int i = 1 ; i < arr.size() ; i++){
                  if(pos + mid <= arr[i]){
                      count++;
                      pos = arr[i];
                  }
              }
              if(count >= k){
                  ans = mid;
                  start = mid + 1;
              } else {
                  end = mid - 1;
              }
          }
          return ans;
      }
  };