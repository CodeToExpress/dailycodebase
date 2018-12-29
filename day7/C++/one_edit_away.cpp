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

bool is_a_modified_substring(string str1, string str2) {
	if (str1.empty()) {
		return true;
	}

	if (str1[0] != str2[1] && str1[0] != str2[0]) {
		return false;
	}

	int found = str2.find(str1[0]);
	
	if (found == 1) {
		return str2.find(str1) != string::npos;
	}

	int j = 0, ctr = 0;
	for (int i = 0; i < str1.size(); j++) {
		if (j >= str2.size()) {
				return false;
		}
		if (str1[i] != str2[j] && ctr == 0) {
			ctr++;
			continue;
		}
		if (str1[i] != str2[j]) {
			return false;
		}
		i++;
	}
	return true;
}

bool can_add_a_character(string str1, string str2) {
	return str2.size() - str1.size() == 1 && is_a_modified_substring(str1, str2);  
}

bool can_delete_a_character(string str1, string str2) {
	return str1.size() - str2.size() == 1 && is_a_modified_substring(str2, str1);
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