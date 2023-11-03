/*
@author Pierre Tobgui	
date: 1/8/2021
*/ 
import java.util.Scanner;

public class FizzBuzz {
	public static void main(String[] args) {
		
		Scanner input = new Scanner(System.in);
		System.out.print("Enter the value of n: ");
		int n = input.nextInt();
		for(int i=1; i<n+1; i++) {
			if(i%3 == 0 && i%5 == 0) {
				System.out.println("FizzBuzz");
			} else if(i%3  == 0) {
				System.out.println("Fizz");
			} else if(i%5 == 0) {
				System.out.println("Buzz");
			} else {
				System.out.println(i);
			}
		}
	}
}