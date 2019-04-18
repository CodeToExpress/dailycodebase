/*
*  @author : AkshitAggarwal
*  @date : 09/03/2019
*/

//Function void wordReversal works assuming that there is only one space between the words.

#include<iostream>
#include<cstring>
#include<cctype>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;

void capitalizeFirstAlph(string s); //To Capitalize each word of a sentence
void wordReversal(string s); //To reverse each word in a sentence
int anagramCheck(string s1, string s2); //To check whether two sentences are anagrams of each other

int main()
{
    string input, string2;
    cout<<"\nEnter a String: ";
    getline(cin, input);
    capitalizeFirstAlph(input);
    wordReversal(input);
    cout<<"\nEnter Another String: ";
    getline(cin, string2);
    int ans = anagramCheck(input, string2);
    if(ans == 0)
        cout<<"Strings are anagrams\n";
    else cout<<"String are not anagrams!\n";

    cout<<"==========================\n";
    return 0;
}

void capitalizeFirstAlph(string s)
{
    int i = 1;
    s[0] = toupper(s[0]);
    while(s[i] != '\0')
    {
        if(s[i - 1] == ' ')
            s[i] = toupper(s[i]);
        i++;
    }
    cout<<s<<'\n';
    cout<<"==========================\n";
}   

void wordReversal(string s)
{
    int i = 0, first = 0, front = 0;
    char temp = ' ';
    while(s[i] != '\0')
    {
        if(s[i + 1] == ' ' || s[i + 1] == '\0')
        {
            //Variables Front and Back are used for word reversal.
            //Variable First is used to indicate the first index of the word.
            front = first; 
            for(int j = 0, back = i; j < (i - first + 1) / 2; j++, back--)
            {
                temp = s[front]; //Reversing of word
                s[front] = s[back];
                s[back] = temp;
                front++;
            }
            first = i + 2; //Assigning index of next word's first letter. 
        }
        i++;
    }
    
    cout<<s<<'\n';
    cout<<"==========================\n";
}

int anagramCheck(string s1, string s2)
{
    int n1 = s1.length();
    int n2 = s2.length();

    if(n1 != n2) cout<<"\nNot Anagrams";
    else
    {
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());

        for(int i = 0; i < n1; i++)
        {
            if(s1[i] != s2[i])
                return 1;
        }
        return 0;
    }
    
}