/*
* @author : imkaka
* @date   : 04/01/2019
*/

#include<iostream>
#include<string>

using namespace std;

void longestCommonSubstrig(string, string);

int main(){

    string str1 = "bisect", str2 = "secret";
    longestCommonSubstrig(str1, str2); // sec
    longestCommonSubstrig("abcxyzey", "cxyazeal"); //cxy
    return 0;
}

void longestCommonSubstrig(string str1, string str2){

    int m = str1.size();
    int n = str2.size();

    int LCW[m+1][n+1];

    //Track Len and location.
    int maxLCW = 0;
    int loc = m+1;

    for(int i = 0; i <= m; ++i){
        LCW[i][n] = 0;
    }

    for(int i = 0; i <= n; ++i){
        LCW[m][i] = 0;
    }

    // Calculating the max length of common subword
    for(int c = n-1; c >= 0; --c){
        for(int r = m-1; r >= 0; --r){
            if(str1[r] == str2[c]){
                LCW[r][c]  = 1 + LCW[r+1][c+1];
            }

            else{
                LCW[r][c] = 0;
            }

            if(LCW[r][c] > maxLCW){

                maxLCW = LCW[r][c];
                loc = r;
            }
        }
    }

// Finding the Common SubWord
    string re = "";
    for(int r = loc; r < loc + maxLCW; ++r){
        re += char(str1[r]);
    }

    cout << re << endl;

}
