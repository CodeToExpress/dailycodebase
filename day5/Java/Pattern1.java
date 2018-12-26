import java.util.Scanner;

/***
 * Pattern #1
 * input = 5
 * 1
 * 1 2
 * 1 2 3
 * 1 2 3 4
 * 1 2 3 4 5
 */

public class Pattern1 {
    public static void main (String[] args) {
        System.out.println("/* ===== Pattern #1 ===== */");
        Scanner input = new Scanner (System.in);
        int n = input.nextInt(), i, j;

        // Print the pattern
        for (i=1; i<=n; i++) {
            for (j=1; j<=i; j++) {
                System.out.print(j + " ");
            }
            System.out.println("");
        }
    }
}
