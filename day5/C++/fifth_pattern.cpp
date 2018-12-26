#include <iostream>

using namespace std;

void fifth_pattern(int num) {
    string result = "";
    int bound = 2  * num - 1;
    for (int i = num; i >= 1; i--) {
        for (int j = 1; j <= bound; j++) {
            if (j <= num - i || j >= num + i) {
                cout << "  ";
            } else {
                cout << "* ";
            }
        }
        cout << "\n";
    }
}

int main() {
 int num;
 cout << "Enter a number: ";
 cin >> num;
 fifth_pattern(num);
 return 0;
}