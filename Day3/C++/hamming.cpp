#include<iostream>

using namespace std;

int hammingDistance(string first_word, string second_word) {
    int count = 0;
    if (first_word.size() != second_word.size()) {
        return -1;
    }
    for (int i = 0; i < first_word.size(); i++) {
        if (first_word[i] != second_word[i]) {
            count++;
        }
    }
    return count;
}

int main() {
    string first_word, second_word;
    cout << "Enter the first word: ";
    cin >> first_word;
    cout << "Enter the second word: ";
    cin >> second_word;
    cout << "The hamming distance between " << first_word << " and " << second_word << " is: " << hammingDistance(first_word, second_word) << endl;
    return 0;
}