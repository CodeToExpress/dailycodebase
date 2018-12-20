#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	for(int i = 1; i < n; i++){
	    if( i % 15 == 0){
	        cout << "fizzbuzz, ";
	    }
	    else if( i % 3 == 0){
	        cout << "fizz, ";
	    }
	    else if( i % 5 == 0){
	        cout << "buzz, ";
	    }
	    else
	    cout << i << ", ";
	}
	return 0;
}
