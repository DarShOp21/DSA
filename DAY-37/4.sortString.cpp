#include<iostream>
#include<vector>

using namespace std;

string sortString(string str){
    vector<int>alpha(26,0);

    for(int i = 0 ; i < str.size() ; i++)
    alpha[str[i] - 'a']++;

    string ans;
    for(int i = 0 ; i < 26 ; i++){
        char c = 'a' + i;
        while(alpha[i]){
            ans+=c;
            alpha[i]--;
        }
    }

    return ans;
}

int main(){
    string str = "abcdgbbc";
    
    cout << "Sorted string : " << sortString(str) << endl;

    return 0;
}   