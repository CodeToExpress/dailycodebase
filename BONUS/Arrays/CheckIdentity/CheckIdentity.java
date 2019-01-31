/**
 * Check Identity Matrix
 * @author MadhavBahlMD
 * @date 26/01/2019
 */

import java.util.*;

class CheckIdentity {
    public static void main(String[] args) {
        Scanner input = new Scanner (System.in);
        System.out.print("Enter the N (for NxN matrix): ");
        int n = input.nextInt();

        // Input the array
        int[][] arr = new int[n][n];
        System.out.println("Enter the elements: ");
        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                System.out.print("arr[" + i + "][" + j + "] = ");
                arr[i][j] = input.nextInt();
            }
        }

        // Check for identity
        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                if (i == j) {
                    if (arr[i][j] != 1) {
                        System.out.println("Given matrix is not identity!");
                        System.exit(0);
                    }
                } else {
                    if (arr[i][j] != 0) {
                        System.out.println("Given matrix is not identity!");
                        System.exit(0);
                    }
                }
            }
        }

        System.out.println("Given matrix is an identity matrix!");
    }
}