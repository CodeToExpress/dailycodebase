import java.util.*;

class ReverseWords {
    public static void main(String[] args) {
        Scanner input = new Scanner (System.in);
        System.out.print("Enter a sentence: ");
        String line = input.nextLine();
        String[] words = line.split(" ");
        int numWords = words.length;

        String[] reversed = new String[numWords];
        for (int i=0; i<numWords; i++) {
            String thisWord = "";
            for (int j=0; j<words[i].length(); j++) 
                thisWord = words[i].charAt(j) + thisWord;
            reversed[i] = thisWord;
        }

        String reversedLine = String.join(" ", reversed);
        System.out.println("String with reversed words is: " + reversedLine);
    }
}