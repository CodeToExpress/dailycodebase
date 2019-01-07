/**
 * @author MadhavBahlMD
 * @date 21/12/2018
 */

import java.util.Scanner;

public class Reverse {
    public static void main(String[] args) {
        System.out.println("/* ===== String Reversal ===== */");
        System.out.print("\nPlease enter the string: ");
        Scanner input = new Scanner(System.in);
        String str = input.next();
        String reversed = "";

        for (int i=0; i<str.length(); i++) {
            reversed = str.charAt(i) + reversed;
        }

        System.out.println("Reversed String: " + reversed);
    }
}
