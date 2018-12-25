/**
 * @author: Rajdeep Roy Chowdhury<rrajdeeproychowdhury@gmail.com>
 * @github: https://github.com/razdeep
 * @date: 25/12/2018
 * 
 * Max Char Problem Solution
 * 
**/

#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;
int main()
{
    int count = 0;

    // Input the string
    string str;
    cout << "/* ===== Number of Vowels ===== */" << endl;
    cout << "\nEnter the string: ";
    cin >> str;

    // Convert input string to lower case
    // using transform() function and ::tolower in STL
    transform(str.begin(), str.end(), str.begin(), ::tolower);

    int max_count = INT_MIN;
    char max_label;
    for (int i = 0; i < str.size(); i++)
    {
        int this_count = std::count(str.begin(), str.end(), str[i]);
        if (this_count > max_count)
        {
            max_count = this_count;
            max_label = str[i];
        }
    }
    cout << "'" << (char)max_label << "' has " << max_count << " occurences." << endl;
    return 0;
}