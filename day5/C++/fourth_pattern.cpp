#include <iostream>

using namespace std;

void fourth_pattern(int num) {
    int bound = 2 * num - 1, ctr;
    for (int i = 1; i <= num; i++) {
        ctr = i;
        for (int j = 1; j <= bound; j++) {
            if (j <= num - i || j >= num + i) {
                cout << "  ";
            } else {
                cout << ctr << " ";
                if (j < num) {
                    ctr++;
                } else {
                    ctr--;
                }
            }
        }
        cout << endl;
    }
}

int main() {
 int num;
 cout << "Enter a number: ";
 cin >> num;
 fourth_pattern(num);
 return 0;
}