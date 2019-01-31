/* 
  * @author: Shubhendra Singh <shubehndras21@gmail.com> 
  * @github: https://github.com/shubhendra-20
  * @date: 25/01/2019
*/


#include <iostream>
using namespace std;

int main() {
	int i,n;
	cin>>n;
	for(i=1;i<=n;i++)
	{
	    if(i%3==0 && i%5==0)
	    {
	    cout<<"FizzBuzz ";
	    continue;
	    }
	    if(i%3==0)
	    {
	        cout<<"Fizz ";
	        continue;
	    }
	    else if(i%5==0)
	    {
	        cout<<"Buzz ";
	        continue;
	    }
	    else
	    cout<<i<<" ";
	}
	return 0;
}
