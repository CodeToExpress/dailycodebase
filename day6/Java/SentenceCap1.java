/**
 * @author MadhavBahl
 * @date 27/12/2018
 */

import java.util.Scanner;

public class SentenceCap1 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the sentence: ");
        String str = input.nextLine();

        String[] words = str.split("\\s+");

        for (int i=0; i<words.length; i++) {
            words[i] = Character.toUpperCase(words[i].charAt(0)) + words[i].substring(1, words[i].length());
        }

        // Join the array
        System.out.print(String.join(" ", words));
    }
}
