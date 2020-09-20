/*
    @author: AkshitAggarwal
    @date: 08/03/2019
*/

#include<iostream>

using namespace std;

void pattern_1(int n)
{
    cout<<"#Pattern01\n";
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <= i; j++)  
            cout<<j+1<<" ";
        cout<<'\n';
    }
    cout<<"==============================\n";
}

void pattern_2(int n)
{
    cout<<"#Pattern02\n";
    int k = 0;
    for(int i = 0; i < n; i++)
    {
        for( int j = 0; j <= i; j++)
            cout<<++k<<" ";
        cout<<'\n';
    }
    cout<<"==============================\n";
}

void pattern_3(int n)
{
    cout<<"#Pattern03\n";
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <= i; j++)
            cout<<j+1<<" ";
        cout<<'\n';
    }
    for(int i = n - 1; i > 0; i--) //Lower Half
    {
        for(int j = 0; j < i; j++)
            cout<<j+1<<" ";
        cout<<'\n';
    }
    cout<<"==============================\n";
}

void pattern_4(int n)
{
    cout<<"#Pattern04\n";
    for(int i = 0; i < n; i++)
    {
        int k = i;
        for(int j = i; j < n-1; j++) //Spaces on the left
            cout<<"  ";
        for(int j = 0; j <= i; j++) //Left side pattern, central numbers included
            cout<<++k<<' ';
        int l = k;
        for(int j = 0; j < i; j++) //Right side pattern
           cout<<--l<<' ';
        for(int j = i; j < n-1; j++) //Spaces on the right
            cout<<"  ";
        cout<<'\n';
    }
    cout<<"==============================\n";
}

void pattern_5(int n)
{
    cout<<"#Pattern05\n";
    for(int i = n, k = 0; i > 0; i--, k++)
    {
        for(int j = 0; j < k; j++)
            cout<<"  ";
        for(int j = i; j > 0; j--)  
            cout<<"* ";
        for(int j = i - 1; j > 0; j--)  
            cout<<"* ";        
        cout<<'\n';
    }
    cout<<"==============================\n";
}
/*
        *
      * * *
    * * * * *
      * * *
        *
*/
void pattern_6(int n)
{
    cout<<"#Pattern06\n";
    for(int i = 0; i < n; i++)
    {
        int k = i;
        for(int j = i; j < n - 1; j++)
            cout<<"  ";
        for(int j = 0; j <= i; j++)  
        {
            cout<<"* ";
            k++;
        }
        for(int j = 0; j < i; j++)
            cout<<"* ";
        cout<<'\n';
    }
    //Lower Half of the pattern.
    for(int i = n, k = 0; i > 0; i--, k++)
    {
        for(int j = 0; j < k + 1; j++)
            cout<<"  ";
        for(int j = i; j > 1; j--)  
            cout<<"* ";
        for(int j = i - 1; j > 1; j--)  
            cout<<"* ";        
        cout<<'\n';
    }
    cout<<"==============================\n";
}
/*
    * * * * * *
    * *     * *
    *         *
    *         *
    * *     * *
    * * * * * *
*/

void pattern_7(int n)
{
    cout<<"#Pattern07\n";
    for(int i = 0; i < n; i++)
    {
        for(int j = n; j > i; j--)
            cout<<"* ";
        for(int j = 0; j < i; j++)
            cout<<"    ";
        for(int j = n; j > i; j--)
            cout<<"* ";
        cout<<'\n';
    }
    for(int i = 0; i < n; i++) //Lower Half of the pattern.
    {
        for(int j = 0; j <= i; j++)
            cout<<"* ";
        for(int j = n; j > i + 1; j--)
            cout<<"    ";
        for(int j = 0; j <= i; j++)
            cout<<"* ";
        cout<<'\n';
    }
    cout<<"==============================\n";
}

void pattern_8(int n)
{
    cout<<"#Pattern08\n";
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <= i; j++)
            cout<<"* ";
        for(int j = n; j > i + 1; j--)
            cout<<"    ";
        for(int j = 0; j <= i; j++)
            cout<<"* ";
        cout<<'\n';
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = n; j > i; j--)
            cout<<"* ";
        for(int j = 0; j < i; j++)
            cout<<"    ";
        for(int j = n; j > i; j--)
            cout<<"* ";
        cout<<'\n';
    }
    cout<<"==============================\n";
}
int main()
{
    int input = 0;
    cin>>input;
    cout<<"==============================\n";
    pattern_1(input);
    pattern_2(input);
    pattern_3(input);
    pattern_4(input);
    pattern_5(input);
    pattern_6(input);
    pattern_7(input);
    pattern_8(input);
    return 0;
}