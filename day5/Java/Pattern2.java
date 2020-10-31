/**
 * @author MadhavBahl
 * @date 26/12/2018 
 */

import java.util.Scanner;

/**
 * Pattern #2 (Floyds Triangle)
 * input = 4
 * 1
 * 2 3
 * 4 5 6
 * 7 8 9 10
 */

public class Pattern2 {
    public static void main (String[] args) {
        System.out.println("/* ===== Pattern #2 ===== */");
        Scanner input = new Scanner(System.in);
        int n = input.nextInt(), i, j, count=0;

        // Print the pattern
        for (i=1; i<= n; i++) {
            for (j=1; j<=i; j++) {
                count++;
                System.out.print(count + " ");
            }
            System.out.println("");
        }
    }
}
