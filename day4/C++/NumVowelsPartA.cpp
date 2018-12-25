/**
 * @author: Rajdeep Roy Chowdhury<rrajdeeproychowdhury@gmail.com>
 * @github: https://github.com/razdeep
 * @date: 25/12/2018
**/

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    // set count = 0
    int count = 0;
    string str;
    cout << "/* ===== Number of Vowels ===== */" << endl;
    cout << "\nEnter the string: ";
    cin >> str;

    // Convert input string to lower case
    // using transform() function and ::tolower in STL
    transform(str.begin(), str.end(), str.begin(), ::tolower);

    // Run a loop from 0 to string length
    for (int i = 0; i < str.length(); i++)
    {
        if (
            str[i] == 'a' ||
            str[i] == 'e' ||
            str[i] == 'i' ||
            str[i] == 'o' ||
            str[i] == 'u')
        {
            count++;
        }
    }

    // Print the result
    cout<<"Number of vowels in \""<<str<<"\" = "<<count<<endl;
    return 0;
}