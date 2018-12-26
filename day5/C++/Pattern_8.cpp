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
        for(int j=1; j<=i; j++)  //Left Triangle
            cout<<"* ";
        for(int s=1; s<=(n-i); s++)  //Space
            cout<<"    ";
        for(int j=1; j<=i; j++)  //Right Triangle
            cout<<"* ";
        cout<<endl;
    }
    //Lower-Half
    for(int i=1; i<=n; i++){
        for(int j=i; j<=n; j++)  //Left Triangle
            cout<<"* ";
        for(int s=1; s<i; s++)  //Space
            cout<<"    ";
        for(int j=i; j<=n; j++)  //Right Triangle
            cout<<"* ";
        cout<<endl;
    }
    return 0;
}
