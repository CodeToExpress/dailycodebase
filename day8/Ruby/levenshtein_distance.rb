#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int ind(int m, int n) {
    return m == n;
}

int dist(string first, string second) {
    int firstLength = first.length(), secondLength = second.length();
    int m[firstLength + 1][secondLength + 1];
    for (int i = 1; i <= firstLength; i++) {
        m[i][0] = i;
    }
    for (int i = 0; i <= secondLength; i++) {
        m[0][i] = i;
    }
    for (int i = 1; i <= firstLength; i++) {
        for (int j = 1; j <= secondLength; j++) {
            int values[] = { m[i - 1][j] + 1, m[i][j - 1] + 1, m[i - 1][j - 1] + ind(first[i], second[j]) };
            m[i][j] = *min_element(begin(values), end(values));
        }
    }
    return m[firstLength][secondLength];
}
int main() {
    string first, second;
    cout << "Enter two strings: " << endl;
    getline(cin, first);
    getline(cin, second);
    cout << "The Levenshtein distance between \"" << first << "\" and \"" << second << "\" is: " << dist(first, second) << endl;
}
