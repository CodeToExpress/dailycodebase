/**
 * @author:divyakhetan
 * @date: 30/12/2018
 */


#include<bits/stdc++.h>
using namespace std;


int main(){
	string s1;
	cin >> s1;
	int freqlo[26];
	memset(freqlo, 0, sizeof(freqlo));
	int freqhi[26];
	memset(freqhi, 0, sizeof(freqhi));
	int max = 0;
	char maxc;
	//count for lowercase
	for(int i = 0; i < s1.length(); i++){
		if(s1[i] >= 'a' && s1[i] <= 'z'){
				freqlo[s1[i] - 'a']++;
				if(freqlo[s1[i] - 'a']> max){
					max = freqlo[s1[i] - 'a'];
					maxc = s1[i];
				}
		}
	
		else if(s1[i] >= 'A' && s1[i] <= 'Z'){
				freqhi[s1[i] - 'A']++;
				if(freqhi[s1[i] - 'A']> max){
					max = freqhi[s1[i] - 'A'];
					maxc = s1[i];
				}
		}
	}
	
	


	cout << "Max freq is:" << max << " for " << maxc;
	return 0;
}
