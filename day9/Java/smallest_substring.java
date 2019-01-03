/**
        * @author: <chaitanya-bhojwani>
        * @date: <01-01-2019>
 **/

import java.util.*;
class smallest_substring {
	static int checker(String st_check, char[] ch){
		int result = 0;
		for(char c:ch){
			if(st_check.contains(c+"")){
				result = 1;
			}
			else{
				result = 0;
				break;
			}
		}
		return result;
	}
	public static void main(String args[]) {
		System.out.println("---------Daily Codes - Day 9 ---------------");
		System.out.println("---Smallest Substring Problem---");
		System.out.println("Enter the length of character array: ");
		Scanner sc = new Scanner(System.in);
		int length = sc.nextInt();
		int smallest_length = 999;
		String smallest_subs = "";
		char[] ch = new char[length];
		System.out.println("Enter elements of character array: ");
		for(int i=0;i<length;i++) {
			ch[i] = sc.next().charAt(0);
		}
		System.out.println("Enter the String to Check: ");
		String str = sc.next();
		for (int i = 0; i < str.length(); i++) {
			for (int j = i+1; j <= str.length(); j++) {
				int str_check = checker(str.substring(i,j),ch);
				if(str_check == 1){
					if(str.substring(i,j).length()<smallest_length){
						smallest_length = str.substring(i,j).length();
						smallest_subs = str.substring(i,j);
					}
				}
			}
		}
		if(smallest_subs.equals("")){
			System.out.println("Smallest Substring: " + "No Such Substring possible");
		}
		else {
			System.out.println("Smallest Substring: " + smallest_subs);
		}
}
}