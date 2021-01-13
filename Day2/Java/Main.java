import java.util.Scanner;
import java.util.Stack;

public class Main {
	
	public static void main(String[]args) {
		System.out.println("/* ===== String Reversal ===== */");
		System.out.print("\nPlease enter the string: ");
		Scanner input = new Scanner(System.in);
		String str = input.next();
		
		String reversed = reverseStr(str);
		System.out.println(reversed);
			
	}
	
	public static String reverseStr(String str) {
		
		Stack<Character> myStack = new Stack<Character>();
		String output="";
		
		for(int i =0;i<str.length();i++) {
			myStack.push(str.charAt(i));
		}
		
		while(!myStack.isEmpty()) {
			output+=myStack.pop();
		}
		return output;
	}
	
	public static boolean isPalindrome(String str) {
		
		String reverse = reverseStr(str);
		
		for(int i =0;i<str.length();i++) {
			if(str.charAt(i)!=reverse.charAt(i)) {
				return false;
			}
		}
		
		return true;
	}
}
