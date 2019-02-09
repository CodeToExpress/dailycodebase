/* 
 * @author: Nomit Pahuja
 * date: 09/02/2019
 */

import java.util.Scanner;

public class HammingDistance1 {

    public static int hammingDistance(String word1, String word2) {
        int distance = 0;
        //Checking word length 
        if (word1.length() != word2.length()) {
            return -1;
        }
        //Checking if symbols are same or not 
        for(int i = 0; i<word1.length(); i++ ) {
            if(word1.charAt(i) != word2.charAt(i)) {
                distance++;
            }
        }
        return distance;
    }

    public static void main (String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter the first string: ");
        String word1 = in.next();
        System.out.print("Enter the second string: ");
        String word2 = in.next();
        int distance = hammingDistance(word1, word2);
        if(distance == -1) {
            System.out.println("Please enter strings of same length");
        } else {
            System.out.println("The Hamming distance between the strings " + word1 + " and " + word2 + " is " + distance);
        }
        System.exit(0);
     }
 }