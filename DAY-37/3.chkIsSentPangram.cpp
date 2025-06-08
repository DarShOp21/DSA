#include<iostream>
#include<vector>

using namespace std;

bool checkIfPangram(string sentence){
    vector<bool>alpha(26,0);

    for(int i = 0 ; i < sentence.size() ; i++)
    alpha[sentence[i] - 'a'] = 1;

    for(int i = 0 ; i < 26 ; i++)
    if(alpha[i] == 0)
    return false;

    return true;
}

int main(){
    string sent = "thequickbrownfoxjumpsoverthelazydog";

    if(checkIfPangram(sent))
    cout << "The sentence is a pangram" << endl ;
    else
    cout << "The sentence is not a pangram" << endl ;

    return 0;
}