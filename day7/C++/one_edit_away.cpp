/*
 * @author: aaditkamat
 * @date: 28/12/2018
 */

#include <iostream>

using namespace std;

bool can_replace_a_character(string str1, string str2) {
	if (str1.size() != str2.size()) {
		return false;
	}
	int change = 0;
	for (int i = 0; i < str1.size(); i++) {
		if (str1[i] != str2[i]) {
			change++;
		}
	}
	return change == 1;
}

bool is_a_substring(string str1, string str2) {
	int found = str2.find(str1);
	return found != string::npos;
}

bool can_add_a_character(string str1, string str2) {
	return str2.size() - str1.size() == 1 && is_a_substring(str1, str2);  
}

bool can_delete_a_character(string str1, string str2) {
	return str1.size() - str2.size() == 1 && is_a_substring(str2, str1);
}

bool are_one_edit_away(string str1, string str2) {
	if (str1 == str2) {
		return true;
	}
	return can_replace_a_character(str1, str2) || can_add_a_character(str1, str2) || can_delete_a_character(str1, str2);
}

int main() {
	string str1, str2;
	cout << "Enter two strings: " << endl;
	getline(cin, str1);
	getline(cin, str2);
	cout << "Are \"" << str1 << "\" and \"" << str2 << "\" one edit away? " << are_one_edit_away(str1, str2) << endl;
}