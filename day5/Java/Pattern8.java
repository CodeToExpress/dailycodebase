/**
 * @author MadhavBahl
 * @date 26/12/2018 
 */

/**
 * input = 5
 *
 *   *                 *
 *   * *             * *
 *   * * *         * * *
 *   * * * *     * * * *
 *   * * * * * * * * * *
 *   * * * * * * * * * *
 *   * * * *     * * * *
 *   * * *         * * *
 *   * *             * *
 *   *                 *
 */

import java.util.Scanner;

public class Pattern8 {
    public static void main(String[] args) {
        System.out.println("/* ===== Pattern #8 ===== */");
        Scanner input = new Scanner(System.in);
        int n = input.nextInt(), i, j;

        // Print upper pattern
        for (i=1; i<=n; i++) {
            for (j=1; j<=2*n; j++) {
                if (j<=n) {
                    if (i<j)  System.out.print("  ");
                    else  System.out.print("* ");
                } else {
                    if (i+j < 2*n + 1)  System.out.print("  ");
                    else  System.out.print("* ");
                }
            }
            System.out.println("");
        }

        // Print lower pattern
        for (i=1; i<=n; i++) {
            for (j=1; j<=2*n; j++) {
                if (j<=n) {
                    if (i+j>n+1)  System.out.print("  ");
                    else  System.out.print("* ");
                } else {
                    if (i > j-n)  System.out.print("  ");
                    else  System.out.print("* ");
                }
            }
            System.out.println("");
        }
    }
}
