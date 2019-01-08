/**
 * @date 05/01/1998
 * @author spattk (Sitesh Pattanaik)
 */

import java.util.*;

class LongestCommonSubstring
{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String str1 = sc.next();
		String str2 = sc.next();

		int n = str1.length();
		int m = str2.length();

		int[][] dp = new int[n+1][m+1];

		int max = 0;
		int index = 0;

		for(int i=0;i<=n;i++)
		{
			for(int j=0;j<=m;j++)
			{
				if(i==0 || j==0)
					dp[i][j] = 0;

				else if(str1.charAt(i-1)==str2.charAt(j-1)){
					dp[i][j] = dp[i-1][j-1] + 1;
					if(max<dp[i][j]){
						max = dp[i][j];
						index = i;
					}
				}
			}
		}

		char[] result = new char[max];
		int temp = max;
		while(index>0 && temp>0)
		{
			result[temp-1] = str1.charAt(index-1);
			index--;
			temp--;
		}
		String str = new String(result);
		System.out.println(str);
	}
}