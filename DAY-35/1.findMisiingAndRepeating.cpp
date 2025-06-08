#include<iostream>
#include<vector>

using namespace std;

vector<int> findMissAndRept(vector<int>arr){
    vector<int>ans;
    int size = arr.size();
    vector<int>dup(size,0);
    for(int i = 0 ; i < size ; i++){
        int num = arr[i];
        dup[num-1]++;
    }

    for(int i = 0 ; i < size ; i++){
        if(dup[i]==0)
        ans.push_back(i+1);
        if(dup[i] == 2)
        ans.push_back(i+1);  
    }

    return ans;
}


vector<int> findMissAndRept2(vector<int>arr){
    int size = arr.size();
    vector<int>ans(2);
    for(int i = 0 ; i < size ; i++)
    arr[i]--;                           //Decreasing each value in the value by 1 

    for(int i = 0 ; i < size ; i++)
    arr[arr[i]%size] += size;

    for(int i = 0 ; i < size ; i++){
        if(arr[i]/size == 0){
            ans[0] = (i+1);
            break;
        }
        if(arr[i]/size == 2){
            ans[1] = (i+1);
        }  
    }

    return  ans;
}

int main(){
    vector<int>arr = {1,5,2,5,3,4};

    vector<int>ans = findMissAndRept(arr);
    vector<int>ans2 = findMissAndRept2(arr);
    cout << "The missing number is " << ans[1] << " the repeating number is " << ans[0] << endl;
    cout << "The missing number is " << ans2[0] << " the repeating number is " << ans2[1] << endl;
    return 0;
}