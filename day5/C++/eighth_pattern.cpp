#include <iostream>

using namespace std;

void eighth_pattern(int num) {
    string result = "";
    int bound = 2 * num, ctr = 1;
    for (int i = 1; i <= bound; i++) {
        for (int j = 1; j <= bound; j++) {
            if (j <= ctr || j > bound - ctr) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        if (i < num) {
            ctr++;
        }
        if (i > num) {
            ctr--;
        }
        cout << "\n";
    }
}

int main() {
 int num;
 cout << "Enter a number: ";
 cin >> num;
 eighth_pattern(num);
 return 0;
}