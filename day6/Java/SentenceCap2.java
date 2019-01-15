/**
 * @author MadhavBahlMD
 * @date 27/12/2018
 */
 
import java.util.Scanner;

public class SentenceCap2 {
    public static void main(String[] args) {
        Scanner input = new Scanner (System.in);
        System.out.print("Enter the sentence: ");
        String sentence = input.nextLine();
        String capitalized = "";

        for (int i=0; i<sentence.length(); i++) {
            if (i==0)   capitalized += Character.toUpperCase(sentence.charAt(i));
            else {
                if (sentence.charAt(i-1) == ' ') {
                    capitalized  += Character.toUpperCase(sentence.charAt(i));
                } else {
                    capitalized += sentence.charAt(i);
                }
            }
        }

        // Print the results
        System.out.println("Capitalized String is: " + capitalized);
    }
}
