/*
* @author : imkaka
* @date   : 27/12/2018
*/

#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>

using namespace std;

int main(){
    string str;
    getline(cin, str);

    stringstream ss(str);
    string res = "";
    do {
        // Read a word
        string word;
        ss >> word;

        reverse(word.begin(), word.end());
        res += word;
        res+=" ";

        // While there is more to read
    } while (ss);

    cout << "Reversed Word Sentance => { " << res << " }" << endl;
    return 0;
}
