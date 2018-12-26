#include <iostream>

using namespace std;

void seventh_pattern(int num) {
    string result = "";
    int ctr = num, bound = 2 * num + 1;
    for (int i = 1; i <= bound - 1; i++) {
        for (int j = 1; j <= bound; j++) {
            if (j <= ctr || j > bound - ctr) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        if (i < num) {
            ctr--;
        }
        if (i > num) {
            ctr++;
        }
        cout << "\n";
    }
}

int main() {
 int num;
 cout << "Enter a number: ";
 cin >> num;
 seventh_pattern(num);
 return 0;
}