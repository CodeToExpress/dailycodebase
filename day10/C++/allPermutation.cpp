/*
* @author : imkaka
* @date   : 2/1/2019
*/

#include <bits/stdc++.h>
using namespace std;

// Rotation will help us to rearange the chars.

void allPermutation(string str, string out)
{

    if (str.size() == 0)
    {
        cout << out << endl;
        return;
    }


     for (int i = 0; i < str.size(); i++)
    {
        // Remove first character from str and
        // add it to out
        allPermutation(str.substr(1), out + str[0]);

        // Rotate string in a way second character
        // moves to the beginning.
        rotate(str.begin(), str.begin() + 1, str.end());
    }
}

int main(){

    allPermutation("abcde", "");
    allPermutation("1234", "");
    allPermutation("beyounic", "");

    return 0;
}
