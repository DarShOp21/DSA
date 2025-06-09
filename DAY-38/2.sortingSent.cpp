#include<iostream>
#include<vector>

using namespace std;

string sortString(string str){
    vector<string>sortedString(10);
    string temp="";
    int count = 0 , index = 0;
    while (index < str.size()){
        //Add the word(temp) one-by-one to the sortedString
        if(str[index] == ' '){
            int pos = temp[temp.size()-1]-'0';  //get the position for the word
            temp.pop_back();                    //remove the number present at the end of the word
            sortedString[pos] = temp;           //add the word to the sortedString
            temp.clear();                       //clear the temp to handle the further word
            count++;                            //Count the number of words
        }
        //Inserting characters to the temp
        else {
            temp += str[index];
        }
        index++;
    }
    //Handling for the last word because , we'll not get the ' ' at the end
    int pos = temp[temp.size()-1]-'0';
    temp.pop_back();
    sortedString[pos] = temp;
    temp.clear();
    count++;

    for(int i = 1 ; i <= count ; i++){
        temp += sortedString[i];
        temp += " ";
    }
    temp.pop_back();
    return temp;
}

int main(){
    string str = "Myself2 ME1 DARSHAN3";
    string ans = sortString(str);

    cout << ans << endl ;
    return 0;
}