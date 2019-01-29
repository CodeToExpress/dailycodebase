/*
 * @author: aaditkamat
 * @date: 26/12/2018
 */

#include <iostream>

using namespace std;

void first_pattern(int num) {
   for (int i = 1; i <= num; i++) {
       for (int j = 1; j <= i; j++) {
          cout << j << " ";
       }
       cout << endl;
   }
}

int main() {
 int num;
 cout << "Enter a number: ";
 cin >> num;
 first_pattern(num);
 return 0;
}