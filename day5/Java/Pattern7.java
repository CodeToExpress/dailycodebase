/**
 * @author MadhavBahl
 * @date 26/12/2018 
 */

/**
 * input = 4
 *
 *   * * * * * * * * *
 *   * * *       * * *
 *   * *           * *
 *   *               *
 *   * *           * *
 *   * * *       * * *
 *   * * * * * * * * *
 */

import java.util.Scanner;

public class Pattern7 {
    public static void main (String[] args) {
        System.out.println("/* ===== Pattern #7 ===== */");
        Scanner input = new Scanner(System.in);
        int n = input.nextInt(), i, j;

        // Print upper half
        for (i=1; i<=n; i++) {
            for (j=1; j<=2*n; j++) {

                // Print upperleft pattern
                if (i+j <= n+1)
                    System.out.print("*");
                else
                    System.out.print(" ");

                // Print upperright pattern
                if (i>j-n)
                    System.out.print(" ");
                else
                    System.out.print("*");
            }
            System.out.println("");
        }

        // Print lower half
        for (i=1; i<=n; i++) {
            for (j=1; j<=2*n; j++) {

                // Print lower left pattern
                if (j>i)
                    System.out.print(" ");
                else
                    System.out.print("*");

                // Print lower right pattern
                if (i+j < 2*n+1)
                    System.out.print(" ");
                else
                    System.out.print("*");
            }
            System.out.println("");
        }
    }
}
