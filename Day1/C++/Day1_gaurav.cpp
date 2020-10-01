/* 
  * @author: Gaurav Kumar <gk956842@gmail.com> 
  * @github: https://github.com/gaurav01k3
  * @date: 01/11/2020
*/

#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cout << "Enter the no : ";
    cin >> n;
    // cout<<"\n";
    for (i = 1; i <= n; i++)
    {
        if ((i % 5 == 0) && (i % 3 == 0))
        {
            cout << "FizzBuzz\n";
        }
        else if (i % 3 == 0)
        {
            cout << "Fizz\n";
        }
        else if (i % 5 == 0)
        {
            cout << "Buzz\n";
        }
        else
        {
            cout << i << "\n";
        }
    }
    return 0;
}