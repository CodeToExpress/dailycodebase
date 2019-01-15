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

    //Upper-Half
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++)
            cout<<j <<" ";
        cout<<endl;
    }
    //Lower-Half
    for(int i=n-1; i>=1; i--){
        for(int j=1;  j<=i; j++)
            cout<<j <<" ";
        cout<<endl;
    }
    return 0;
}
