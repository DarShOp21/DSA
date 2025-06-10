#include<iostream>
#include<vector>

using namespace std;

string sortVowelInString(string str){
    vector<int>lower(26,0);
    vector<int>upper(26,0);

    //getting the count of the vowels and replacing the vowels with '@'
    for(int i = 0 ; i < str.size() ; i++){
        //lower --> a e i o u
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'o'){
            lower[str[i]-'a']++;
            str[i] = '@';
        }

        //upper --> A E I O U
        if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
            upper[str[i]-'A']++;
            str[i] = '@';
        }
    }

    string vowels;
    //upper
    for(int i = 0 ; i < 26 ; i++){
        char c = 'A' + i;
        while(upper[i]){
            vowels+=c;
            upper[i]--;
        }
    }

    //lower
    for(int i = 0 ; i < 26 ; i++){
        char c = 'a' + i;
        while (lower[i]){
            vowels+=c;
            lower[i]--;
        }
    }

    int first = 0 , second = 0 ;        //first - pointing the string & second - pointing the vowel
    while (second < vowels.size())
    {
        if(str[first] == '@'){
            str[first] = vowels[second]; 
            second++; 
        }
        first++;
    }

    return str;
    

}

int main(){
    string str = "leEtcodE";

    cout << sortVowelInString(str) << endl;

    return 0;
}