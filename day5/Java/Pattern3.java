/**
 * @author MadhavBahlMD
 * @date 26/12/2018 
 */

/**
 * Pattern #3
 * input = 4
 * 1
 * 1 2
 * 1 2 3
 * 1 2 3 4
 * 1 2 3
 * 1 2
 * 1
 */

import java.util.Scanner;

public class Pattern3 {
    public static void main (String[] args) {
        System.out.println("/* ===== Pattern #3 ===== */");
        Scanner input = new Scanner(System.in);
        int n = input.nextInt(), i, j;

        // Print the upper half
        for (i=1; i<=n; i++) {
            for (j=1; j<=i; j++) {
                System.out.print(j + " ");
            }
            System.out.println("");
        }

        // Print the lower half
        for (i=n-1; i>=1; i--) {
            for  (j=1; j<=i; j++) {
                System.out.print(j + " ");
            }
            System.out.println("");
        }
    }
}
