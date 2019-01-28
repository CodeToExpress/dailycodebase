# Matrix Sum

WAP to add 2 matrices

## Solution

### [Java Implementation](./MatrixSum.java)

```java
/**
 * Print Matrix Sum
 */

import java.util.*;

class MatrixSum {
    public static void main(String[] args) {
        Scanner input = new Scanner (System.in);
        System.out.print("Enter the number of rows: ");
        int row = input.nextInt();
        System.out.print("Enter the number of columns: ");
        int col = input.nextInt();

        // Input the 1st Matrix
        int[][] arr1 = new int[row][col];
        System.out.println("Enter the elements of first matrix: ");
        for (int i=0; i<row; i++) {
            for (int j=0; j<col; j++) {
                System.out.print("arr1[" + i + "][" + j + "] = ");
                arr1[i][j] = input.nextInt();
            }
        }

        // Input the 2nd Matrix
        int[][] arr2 = new int[row][col];
        System.out.println("Enter the elements of second matrix: ");
        for (int i=0; i<row; i++) {
            for (int j=0; j<col; j++) {
                System.out.print("arr2[" + i + "][" + j + "] = ");
                arr2[i][j] = input.nextInt();
            }
        }

        // Print 1st matrix
        System.out.println("First Matrix: ");
        for (int i=0; i<row; i++) {
            for (int j=0; j<col; j++) {
                System.out.print(arr1[i][j] + " ");
            }
            System.out.println("");
        }

        // Print 2nd matrix
        System.out.println("Second Matrix: ");
        for (int i=0; i<row; i++) {
            for (int j=0; j<col; j++) {
                System.out.print(arr2[i][j] + " ");
            }
            System.out.println("");
        }

        // Print Transpose matrix
        int[][] sum = new int[row][col];
        System.out.println("Sum of input matrices: ");
        for (int i=0; i<row; i++) {
            for (int j=0; j<col; j++) {
                sum[i][j] = arr1[i][j] + arr2[i][j];
                System.out.print(sum[i][j] + " ");
            }
            System.out.println("");
        }
    }
}
```