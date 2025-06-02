// Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.
#include<iostream>
using namespace std;
int main(){
    int num , ans ;
    cout << "Enter the number whose sqaure root to be find :";
    cin >> num ;

    int start = 1 , end = num , mid;
    while(start <= end){
        mid = start + (end - start)/2;
        if(mid == num / mid){
            ans = mid;
            break;
        } else if( mid < num / mid){
            ans = mid;
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    cout << ans << endl;
    return 0;
}