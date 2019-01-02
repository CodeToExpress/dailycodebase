/*
* @author : imkaka
* @date : 24/12/2018
*/

#include<iostream>
#include<string>

using namespace std;

int main(){

    string str1, str2;

    cin >> str1 >> str2;

    int dis = 0;
    if(str1.size() != str2.size())
        cout << "Not Valid Strings for Hamming Distance Problem!!" << endl;
    else{

        for(int i=0; i < str1.size(); ++i){

            if(str1[i] != str2[i]) dis++;

        }

        cout << "Hamming Distance b/w " << str1 << " and " << str2 << " is " << dis << "." << endl;
    }

    return 0;
}
