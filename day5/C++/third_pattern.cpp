/*
 * @author: aaditkamat
 * @date: 26/12/2018
 */

#include <iostream>

using namespace std;

void third_pattern(int num) {
   int ctr = 1, bound = 2 * num - 1;
   for (int i = 1; i <= bound; i++) {
     for (int j = 1; j <= ctr; j++) {
       cout << j << " ";
     }
     if (i < num) {
        ctr++;
     } else {
        ctr--;
     }
     cout << endl;
   }
}

int main() {
 int num;
 cout << "Enter a number: ";
 cin >> num;
 third_pattern(num);
 return 0;
}