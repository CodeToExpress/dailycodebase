/**
 * @author: aaditkamat
 * @date: 28/12/2018
 */
import java.util.Scanner;

class OneEditAway {
	static boolean canReplaceACharacter(String str1, String str2) {
		if (str1.length() != str2.length()) {
			return false;
		}
		int change = 0;
		for (int i = 0; i < str1.length(); i++) {
			if (str1.charAt(i) != str2.charAt(i)) {
				change++;
			}
		}
		return change == 1;
	}

	static boolean isASubstring(String str1, String str2) {
		if (str1.isEmpty()) {
			return true;
		}

		if (str1.charAt(0) != str2.charAt(1) && str1.charAt(0) != str2.charAt(0)) {
			return false;
		}

		int found = str2.indexOf(str1.charAt(0));
		
		if (found == 1) {
			return str2.substring(1).equals(str1);
		}

		int j = 0, ctr = 0;
		for (int i = 0; i < str1.length(); j++) {
			if (j >= str2.length()) {
				return false;
			}
			if (str1.charAt(i) != str2.charAt(j) && ctr == 0) {
				ctr++;
				continue;
			}
			if (str1.charAt(i) != str2.charAt(j)) {
				return false;
			}
			i++;
		}
		return true;		
	}

	static boolean canAddACharacter(String str1, String str2) {
		return str2.length() - str1.length() == 1 && isASubstring(str1, str2);  
	}

	static boolean canDeleteACharacter(String str1, String str2) {
		return str1.length() - str2.length() == 1 && isASubstring(str2, str1);
	}

	static boolean areOneEditAway(String str1, String str2) {
		if (str1.equals(str2)) {
			return true;
		}
		return canReplaceACharacter(str1, str2) || canAddACharacter(str1, str2) || canDeleteACharacter(str1, str2);
	}

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		String str1, str2;
		System.out.println("Enter two strings: ");
		str1 = input.next();
		str2 = input.next();
		System.out.printf("Are \"%s\" and \"%s\" one edit away? %b\n", str1, str2, areOneEditAway(str1, str2)); 
	}
}