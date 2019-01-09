
/**
 * @date 06/01/1998
 * @author spattk (Sitesh Pattanaik)
 */

import java.util.*;
class StringMatching
{
	static int KMPSearch(String text, String subs){

		int n = subs.length();
		int[] lps = new int[n];

		generateLPSArray(lps,subs);
		n = text.length();
		int m = subs.length();

		int i=0,j=0;
		while(i<n){
			if(text.charAt(i)==subs.charAt(j)){
				i++;
				j++;
			}

			if(j==m){
				//Pattern Found
				return (i-j);
			}

			else if(i<n && text.charAt(i)!=subs.charAt(j)){
				if(j!=0){
					j = lps[j-1];
				}
				else{
					i++;
				}
			}
		}

		return -1;
	}

	static void generateLPSArray(int[] lps, String subs)
	{
		int j = 0;
		int i = 1;
		int n = subs.length();

		while(i<n){
			if(subs.charAt(i)==subs.charAt(j)){
				j++;
				lps[i] = j;
				i++;
			}
			else{
				if(j!=0){
					j = lps[j-1];
				}
				else{
					lps[i] = 0;
					i++;
				}
			}
		}
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String text = sc.next();
		String subs = sc.next();

		System.out.println(KMPSearch(text,subs));
		
	}
}