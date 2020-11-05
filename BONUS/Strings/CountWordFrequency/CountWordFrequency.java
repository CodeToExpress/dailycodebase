/**
 * count frequency of a given word in the array
 * @author MadhavBahl
 * @dadte 26/01/2019
 */

import java.util.*;

class CountWordFrequency {
    public static void main(String[] args) {
        Scanner input = new Scanner (System.in);
        System.out.print("Enter a sentence: ");
        String line = input.nextLine();

        System.out.print("Enter the word: ");
        String word = input.next();

        String splittedLine[] = line.split(" ");
        int count = 0;

        for (int i=0; i<splittedLine.length; i++) {
            if (splittedLine[i].equals(word))
                count++;
        }

        System.out.println("The number of times '" + word + "' appears in the sentence \"" + line + "\" = " + count);
    }
}