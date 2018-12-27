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
        for(int s=i; s<n; s++)  //Space
            cout<<"  ";

        for(int j=0; j<i; j++)  //Number-Sequence
            cout<<(j+i) <<" ";
        for(int j=i-2; j>=0; j--)  //Reverse-Number-Sequence
            cout<<(j+i) <<" ";
        cout<<endl;
    }
    return 0;
}
