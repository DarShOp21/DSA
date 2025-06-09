#include<iostream>
#include<vector>

using namespace std;

int longestPalindrome(string str){
    vector<int>lowerCount(26,0);
    vector<int>upperCount(26,0);

    //Storing the count of the characters
    for(int i = 0 ; i < str.size() ; i++){
        if(str[i] >= 'a')
        lowerCount[str[i]-'a']++;
        else
        upperCount[str[i]-'A']++;
    }
    bool isOdd = false;
    int ans = 0;

    //Handling the count of palindrome for lowercase characters
    for(int i = 0 ; i < 26 ; i++){
        if(lowerCount[i]%2 != 0){
            isOdd = true;
            ans += lowerCount[i]-1;
        }
        else
        ans += lowerCount[i];
    }

    //Handling the count of palindrome for uppercase characters
    for(int i = 0 ; i < 26 ; i++){
        if(upperCount[i]%2 != 0){
            isOdd = true;
            ans += upperCount[i]-1;
        }
        else
        ans += upperCount[i];
    }

    //If their any odd no of count than increase the ans by 1
    if(isOdd)
    ans++;

    return ans;
}

int main(){
    string str;
    cout << "Enter a string : ";
    cin >> str;

    cout << "The count of longest palindrome of " << str << " is " << longestPalindrome(str) << endl;

    return 0;
}