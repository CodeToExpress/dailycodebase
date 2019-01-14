import java.util.Scanner;

/**
 * Daily Codes Day 12 -- Substring Search (Brute Force Search)
 * @author MadhavBahlMD
 * @date 05/01/2018
 */

public class Bruteforce {
    public static void main(String[] args) {
        // Take input
        Scanner input = new Scanner (System.in);
        System.out.print("Enter the string: ");
        String str = input.next();
        System.out.print("Enter the substrinig to search: ");
        String subStr = input.next();

        // Search the string
        int i, j, flag,
            strLen = str.length(),
            subStrLen = subStr.length();

        for (i=0; i<(strLen-subStrLen+1); i++) {
            flag = 1;
            if (str.charAt(i) == subStr.charAt(0)) {
                for (j=1; j<subStrLen; j++) {
                    if (str.charAt(i+j) != subStr.charAt(j)) {
                        flag = 0;
                        break;
                    }
                }

                // If substring is found, print the index
                if (flag == 1) {
                    System.out.println("Substring \"" + subStr + "\" was found in string \"" + str + "\" at index " + i);
                    System.exit(0);
                }
            }
        }

        System.out.println("Substring \"" + subStr + "\" was not found in string \"" + str);
        System.exit(0);
    }
}