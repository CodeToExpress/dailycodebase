/*
* @author : imkaka
* @date   : 27/12/2018
*/
// All patterns day 5 dailycodebase.
#include<iostream>

using namespace std;

void pattern1(int);
void pattern2(int);
void pattern3(int);
void pattern4(int);
void pattern5(int);
void pattern6(int);
void pattern7(int);
void pattern8(int);

int main(){

    int n;
    cout << "Enter a Number: ";
    cin >> n;

    pattern1(n);
    pattern2(n);
    pattern3(n);
    pattern4(n);
    pattern5(n);
    pattern6(n);
    pattern7(n);
    pattern8(n);

    return 0;
}

void pattern1(int n){
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= i; ++j){
            cout << j << " ";
        }
        cout << endl;
    }

    cout << "=================" << endl;
}


void pattern2(int n){
    int count = 1;
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= i; ++j){
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
    cout << "=================" << endl;
}


void pattern3(int n){
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= i; ++j){
            cout << j << " ";
        }
        cout << endl;
    }

    // lower loop

    for(int i = n-1; i >= 1; --i){
        for(int j = 1; j <= i; ++j){
            cout << j << " ";
        }
        cout << endl;
    }

    cout << "=================" << endl;
}


void pattern4(int n){
    for(int i = 1; i <= n; ++i){
        // print spaces
        for(int j = i; j < n; ++j){
            cout << "  ";
        }

        // print the numbers
       for(int j = 0; j < i; ++j)
            cout << (j+i) << " ";

        for(int j = i-2; j >= 0; --j)
            cout << (j+i) << " ";

        cout << endl;
    }

    cout << "====================" << endl;
}


void pattern5(int n){
      int temp = 1;
      for(int i = 1; i <= n; ++i){

        // Print spaces
         for(int j = 1; j < i; ++j){
            cout << "  ";
        }

        // Print Stars
        for(int j = 1; j <= 2*n-temp; ++j){
            cout << "*" << " ";
        }
        temp+=2;
        cout << endl;
    }

    cout << "====================" << endl;
}


void pattern6(int n) {
    int count = 1;
    for(int i = 1; i <= n; ++i){
        // print spaces
        for(int j = i; j < n; ++j){
            cout << "  ";
        }

        // print the numbers
       for(int j = 1; j <= count; ++j)
            cout << "*" << " ";

        count +=2;
        cout << endl;
    }
    count-=4;
    for(int i = n-1; i >= 1; --i){

        // Spaces
        for(int j = i; j < n; ++j){
            cout << "  ";
        }

        for(int j = 1; j <=  count; ++j ){
            cout << "*" << " ";
        }
        count-=2;
        cout << endl;
    }

    cout << "====================" << endl;
}


void pattern7(int n){
    int count = 1;
    for(int i = 1; i <= n; ++i){
        //star
        for(int j = i; j <= n; ++j){
            cout << "*" << " ";
        }

        //space
        for(int j = 0; j < count; ++j)
            cout << "  ";
        //star

        for(int j = i; j <= n; ++j){
            cout << "*" << " ";
        }
        count+=2;
        cout << endl;
    }

    //Lower loop
    count-=2;

    for(int i = 1; i <= n; ++i){
        //star
        for(int j = 1; j <= i; ++j){
            cout << "*" << " ";
        }

        //space
        for(int j = 0; j < count; ++j)
            cout << "  ";
        //star

        for(int j = 1; j <= i; ++j){
            cout << "*" << " ";
        }
        count-=2;
        cout << endl;
    }
    cout << "===================================" << endl;
}


void pattern8(int n){
    int count = (n-1)*4;
    for(int i = 1; i <= n; ++i){
        //star
        for(int j = 1; j <= i; ++j){
            cout << "*" << " ";
        }

        //space
        for(int j = 0; j < count; ++j)
            cout << " ";
        //star

        for(int j = 1; j <= i; ++j){
            cout << "*" << " ";
        }
        count-=4;
        cout << endl;
    }

    //Lower loop
    count+=4;

    for(int i = 1; i <= n; ++i){
        //star
        for(int j = i; j <= n; ++j){
            cout << "*" << " ";
        }

        //space
        for(int j = 0; j < count; ++j)
            cout << " ";
        //star

        for(int j = i; j <= n; ++j){
            cout << "*" << " ";
        }
        count+=4;
        cout << endl;
    }
}
