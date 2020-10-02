#include <bits/stdc++.h>
using namespace std;


int main(){
cout<<"Please enter a number"<<endl;
int A;
cin>>A;

vector <string> soln;

for(int i=1;i<=A;i++){
	
if(i%3==0 && i%5==0)
	soln.push_back("FizzBuzz");
else if(i%3==0)
	soln.push_back("Fizz");
else if(i%5==0)
	soln.push_back("Buzz");
else
	soln.push_back(to_string(i));


}
for(int i=0;i<soln.size();i++)
	cout<<soln[i]<<" ";
cout<<endl;

return 0;
}
