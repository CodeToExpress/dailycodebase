#include<iostream>

/**
 * @author: aaditkamat
 * @date: 28/1/2019
 */

/*
 * The input is assumed to be of the following form:
 * The first line contains the number to be searched
 * The second line contains the numbers to be searched seperated by spaces.
 */
int main() {
    int num;
    std::cin >> num;
    int ctr = 0;
	bool flag = false;
    while (!std::cin.eof()) {
        int value;
        std::cin >> value;
        if (value == num) {
            std::cout << ctr << std::endl;
			flag = true;
        }
        ctr++;
    }
	if (!flag) {
     std::cout << "undefined" << std::endl;
	}
	return 0;
}
