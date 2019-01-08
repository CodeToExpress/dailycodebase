/*
* @author : imkaka
* @date   : 27/12/2018
*/

#include<iostream>
#include<string>

using namespace std;

int main(){
    string str;
    getline(cin, str);

    str[0] = toupper(str[0]);
    for(int i = 1; i < str.size(); ++i){
        if(str[i-1] == ' '){
            str[i] = toupper(str[i]);
        }
    }

    cout << "Result: " << str;
    return 0;
}
