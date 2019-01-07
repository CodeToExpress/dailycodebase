/**
 * @author MadhavBahlMD
 * @date 26/12/2018 
 */

/**
 * input = 4
 *        *
 *      * * *
 *    * * * * *
 *  * * * * * * *
 *    * * * * *
 *      * * *
 *        *
 */

import java.util.Scanner;

public class Pattern6 {
    public static void main (String[] args) {
        System.out.println("/* ===== Pattern #6 ===== */");
        Scanner input = new Scanner(System.in);
        int n = input.nextInt(), i, j;

        // Print upper pyramid
        for (i=1; i<=n; i++) {
            // Print white spaces
            for (j=1; j<=n-i; j++) {
                System.out.print("  ");
            }

            // Print asterisks
            for (j=1; j<=(2*i - 1); j++) {
                System.out.print("* ");
            }

            System.out.println("");
        }

        // Print lower pyramid
        for (i=n-1; i>=1; i--) {
            // Print white spaces
            for (j=1; j<=n-i; j++) {
                System.out.print("  ");
            }

            // Print asterisks
            for (j=1; j<=(2*i - 1); j++) {
                System.out.print("* ");
            }

            System.out.println("");
        }
    }
}
