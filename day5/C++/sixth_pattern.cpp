#include <iostream>

using namespace std;

string sixth_pattern(int num) {
    string result = "";
    int bound = 2 * num - 1, ctr = 0;
    for (int i = 1; i <= bound; i++) {
        for (int j = 1; j <= bound; j++) {
            if (j < num - ctr || j > num + ctr) {
                cout << "  ";
            } else {
                cout << "* ";
            }
        }
        if (i < num) {
            ctr++;
        } else {
            ctr--;
        }
        cout << endl;
    }
    return result;
}

int main() {
 int num;
 cout << "Enter a number: ";
 cin >> num;
 sixth_pattern(num);
 return 0;
}