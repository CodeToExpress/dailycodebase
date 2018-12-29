/*
* @author : imkaka
* @date   : 28/12/2018
*/

#include<iostream>
#include<string>

using namespace std;

string isOneEditDistanceAway(string str1, string str2){

    int mi = str1.size() <= str2.size() ? str1.size() : str2.size();
    int ma = str1.size() > str2.size() ? str1.size() : str2.size();
    if( (ma - mi) > 1){
        return " No! ";
    }

    string sho = str1.size() < str2.size() ? str1 : str2;
    string lon = str1.size() > str2.size() ? str1 : str2;

    bool diff = false;
    int id1 = 0;
    int id2 = 0;

    while(id2 < lon.size() && id1 < sho.size()){

        if(sho[id1] != lon[id2]) {

            if(diff) return "No!";
            diff = true;

            if(sho.size() == lon.size()){
                id1++;
            }
        }else{
            id1++;
        }
        id2++;
    }
    return "Yes!";
}

int main(){

    string str1 , str2;

    cout << "Enter two strings with space in between: ";
    cin >> str1 >> str2;

    cout << str1 << " " << str2 << " => " <<isOneEditDistanceAway(str1, str2) << endl;
    cout << "======= Hard Coded Strings ======= " << endl;
    cout << "pale" << " pal" << " " << " => " <<isOneEditDistanceAway("pale", "pal") << endl;
    cout << "bake" << " cake" << " " << " => " <<isOneEditDistanceAway("bake", "cake") << endl;

    return 0;
}
