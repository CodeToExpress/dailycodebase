/**
        * @author: chaitanya-bhojwani
        * @date: 03-01-2019
 **/
import java.util.*;
class longest_common_substring{
	public static void main(String args[]){
		System.out.println("---------Daily Codes - Day 11 ---------------");
		System.out.println("---Longest Common Substring Problem---");
		System.out.println("Enter the first string: ");
		Scanner sc = new Scanner(System.in);
		String first = sc.next();
		System.out.println("Enter the second string: ");
		String second = sc.next();
		int maxval = 0;
		int maxposi = 0;
		int maxposj = 0;
		String result = "";
		int[][] mat = new int[first.length()][second.length()];
		for(int i=0;i<first.length();i++){
			for(int j=0;j<second.length();j++){
				if(first.charAt(i)==second.charAt(j)){
					if(i==0||j==0){
						mat[i][j] = 1;
					}
					else{
						mat[i][j] = mat[i-1][j-1] + 1;
					}
					if(mat[i][j]>maxval){
						maxval = mat[i][j];
						maxposi = i;
						maxposj = j;
					}
				}
				else{
					mat[i][j] = 0;
				}
			}
		}
		if(maxval>0){
			int i=0;
			while(true){
				if(maxposi-i>=0 && maxposj-i>=0){
					if(mat[maxposi-i][maxposj-i]>0){
						result = result + String.valueOf(first.charAt(maxposi-i));
						i++;
					}
					else{
						break;
					}
				}
				else{
					break;
				}
			}
			System.out.println("Longest Common Substring is: ");
			System.out.println(new StringBuffer(result).reverse().toString());
		}
		else{
			System.out.println("No Common Substring Found");
		}
	}
}