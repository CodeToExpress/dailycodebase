/**
 * @author MadhavBahl
 * @date 27/12/2018
 */

import java.util.Scanner;
import java.lang.*;

public class WordRev {
    public static void main(String[] args) {
        Scanner input = new Scanner (System.in);
        System.out.print("Enter the sentence: ");
        String sentence = input.nextLine();

        String[] words = sentence.split("\\s+");
        String reversed;

        for (int i=0; i<words.length; i++) {
            reversed = "";
            for (int j=0; j<words[i].length(); j++) {
                reversed = words[i].charAt(j) + reversed;
            }
            words[i] = reversed;
        }

        String wordsReversed = String.join(" ", words);
        System.out.println("String with reversed words: " + wordsReversed);
    }
}
