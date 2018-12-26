#include <iostream>

using namespace std;

void second_pattern(int num) {
   int ctr = 1;
   for (int i = 1; i <= num; i++) {
      for (int j = 1; j <= i; j++) {
         cout << ctr++ << " ";
      }
      cout << endl;
   }
}

int main() {
 int num;
 cout << "Enter a number: ";
 cin >> num;
 second_pattern(num);
 return 0;
}