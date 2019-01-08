/**
 * @author MadhavBahlMD
 * @date 26/12/2018 
 */

/**
 * input = 5
 * 
 *   * * * * * * * * *
 *     * * * * * * *
 *       * * * * *
 *         * * *
 *           *
 */

import java.util.Scanner;

public class Pattern5 {
    public static void main (String[] args) {
        System.out.println("/* ===== Pattern #5 ===== */");
        Scanner input = new Scanner(System.in);
        int n = input.nextInt(), i, j;

        // Print the pattern
        for (i=1; i<=n; i++) {
            // Print whitet spaces
            for (j = 1; j < i; j++) {
                System.out.print("  ");
            }

            // Print asterisk
            for (j = 1; j <= (2 * n - (2 * i - 1)); j++) {
                System.out.print("* ");
            }
            System.out.println("");
        }
    }
}