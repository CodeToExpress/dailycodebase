import java.util.*;

class Pattern3 {
    public static void main(String[] args) {
        Scanner input = new Scanner (System.in);
        System.out.print("Enter n: ");
        int n = input.nextInt();

        // Upper Triangle
        for (int i=1; i<=n; i++) {
            for (int j=1; j<=i; j++)
                System.out.print(j);
            System.out.println("");
        }

        // Lower Triangle
        for (int i=n; i>=1; i--) {
            for (int j=1; j<=i; j++)
                System.out.print(j);
            System.out.println("");
        }
    }
}