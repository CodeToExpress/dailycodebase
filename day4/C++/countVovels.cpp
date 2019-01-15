/*
 * @author: imkaka
 * @date: 25/12/2018
*/

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int count = 0;
    string str;
    cout << "/* ===== Number of Vowels ===== */" << endl;
    cout << "\nEnter the string: ";
    cin >> str;

    // transform(str.begin(), str.end(), str.begin(), ::tolower);

    for (int i = 0; i < str.size(); i++)
    {
        if (
            tolower(str[i]) == 'a' ||
            tolower(str[i]) == 'e' ||
            tolower(str[i]) == 'i' ||
            tolower(str[i]) == 'o' ||
            tolower(str[i]) == 'u')
        {
            count++;
        }
    }
    // Print the result
    cout<<"Number of vowels in \""<<str<<"\" = "<<count<<endl;
    return 0;
}
