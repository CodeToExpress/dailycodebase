/*
* @author : imkaka
* @date   : 27/12/2018
*/

#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    string str1, str2;
    cin >> str1 >> str2;

    string temp1 = str1, temp2 = str2;
    if(str1.size() != str2.size()){
        cout << temp1 << " and " << temp2 << " are NOT Anagrams of each other!!" << endl;
    }
    else{
        sort(str1.begin(), str1.end());
        sort(str2.begin(), str2.end());

        if(str1 == str2){
            cout << temp1 << " and " << temp2 << " are Anagrams of each other!!" << endl;
        }
        else{
            cout << temp1 << " and " << temp2 << " are NOT Anagrams of each other!!" << endl;
        }
    }

    return 0;
}
