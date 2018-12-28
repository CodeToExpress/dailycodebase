/**
  * @author : ashwek
  * @date : 26/12/2018
  */

#include<iostream>

using namespace std;

int main(){

    int n;

    cout<<"Enter n = ";
    cin>>n;

    for(int i=1; i <=n; i++){
        for(int s=1; s<i; s++)  //Space
            cout<<"  ";
        for(int j=1; j<(n-i+1)*2; j++)  //Triangle
            cout<<"* ";
        cout<<endl;
    }
    return 0;
}
