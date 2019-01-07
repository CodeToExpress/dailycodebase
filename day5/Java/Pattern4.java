/**
 * @author MadhavBahlMD
 * @date 26/12/2018 
 */

/**
 *          1
 *        2 3 2
 *      3 4 5 4 3
 *    4 5 6 7 6 5 4
 *  5 6 7 8 9 8 7 6 5
 */

import java.util.Scanner;

public class Pattern4 {
    public static void main (String[] args) {
        System.out.println("/* ===== Pattern #4 ===== */");
        Scanner input = new Scanner(System.in);
        int n = input.nextInt(), i, j;

        for (i=1; i<=n; i++) {
            // Print left white spaces
            for (j=n; j>i; j--) {
                System.out.print("  ");
            }

            // Print the numbers
            for (j=i; j<=(2*i-1); j++) {
                System.out.print(j + " ");
            }

            for (j=(2*i-1) - 1; j>=i; j--) {
                System.out.print(j + " ");
            }

            System.out.println("");
        }

    }
}
