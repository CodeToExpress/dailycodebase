/*
* @author: imkaka
* @date :  21/12/2018
*/

#include<iostream>
#include<string>

using namespace std;

int main(){

    string str;
    cin >> str ;

    int size = str.size();
    for(int i = 0; i< size/2; i++)
    {
        char temp = str[i];
        str[i] = str[size-i-1];
        str[size-1-i] = temp;
    }

    cout << str << endl;

    return 0;
}
