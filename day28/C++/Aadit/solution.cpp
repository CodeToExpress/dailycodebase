#include<iostream>

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
