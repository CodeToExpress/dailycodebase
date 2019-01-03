/*
* @author : imkaka
* @date   : 2/1/2019
*/

#include<bits/stdc++.h>

using namespace std;

string minSubString(string str, vector<char> arr){
    // Corner case
    int len  = str.size();
    if(arr.size() > len)
    {
        // cout << "No Answer" << endl;
        return "No Answer";
    }

    set<char> s;
    for(char c : arr){
        s.insert(c);
    }
    int lenMin = len+1;
    string result = "";
    for(int i = 0; i < len; ++i){
        set<char>tempS = s;
        int temp = 0;
        string tempStr = "";
        for(int j = i; j < len; ++j){

           if(tempS.find(str[j]) != tempS.end()){
                tempS.erase(str[j]);
                temp++;
                tempStr += str[j];
            }
            else{
                temp++;
                tempStr += str[j];
            }

            if(tempS.empty()){
                if(lenMin > temp){
                    lenMin = temp;
                    result = tempStr;
                }
                break;
            }

        }
    }

    return result;
}

int main(){

    string str = "abyuxabyteqaebczt";
    vector<char> arr = {'a', 'b', 'c'};
    if(minSubString(str, arr) != "")
     cout << "Substring: " << minSubString(str, arr) <<  endl;
    else cout << "No Sollution" << endl;

    string str2 = "abx";
    vector<char> arr2 = {'a', 'b', 'c'};
    if(minSubString(str2, arr2) != "")
     cout << "Substring: " << minSubString(str2, arr2) <<  endl;
    else cout << "No Sollution" << endl;

    string str3 = "x";
    vector<char> arr3 = {'x'};
    if(minSubString(str3, arr3) != "")
     cout << "Substring: " << minSubString(str3, arr3) <<  endl;
    else cout << "No Sollution" << endl;


    return 0;
}
