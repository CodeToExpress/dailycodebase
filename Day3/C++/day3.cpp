/*
* @author : dhruv-gupta14
* @date : 24/12/2018
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    string str1, str2;
    cin >> str1;
    cin >> str2;
    
    int count = 0;
    if (str1.size() != str2.size()) {
        cout << "-1";
    }
    for (int i = 0; i < str1.size(); i++) {
        if (str1[i] != str2[i]) {
            count++;
        }
    }
    
    cout << count;
    return 0;
}
