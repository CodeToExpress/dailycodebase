/*
* @author : imkaka
* @date : 25/12.2018
*/


#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{
    string str;
    cout << "Enter the string: ";
    cin >> str;

    int max_count = -1;
    char label;
    for (int i = 0; i < str.size(); ++i)
    {
        int current_count = count(str.begin(), str.end(), str[i]);
        if (current_count > max_count)
        {
            max_count = current_count;
            label = str[i];
        }
    }
    cout << "'" << (char)label << "' has MAX " << max_count << " occurences in " << str << endl;
    return 0;
}
