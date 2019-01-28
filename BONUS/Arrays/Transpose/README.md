# Transpose 

WAP to print the transpose of the given matrix

## Solution

### [Java Implementation](./Transpose.java)

```java
/**
 * Print Transpose
 */

import java.util.*;

class Transpose {
    public static void main(String[] args) {
        Scanner input = new Scanner (System.in);
        System.out.print("Enter the number of rows: ");
        int row = input.nextInt();
        System.out.print("Enter the number of columns: ");
        int col = input.nextInt();

        // Input the array
        int[][] arr = new int[row][col];
        System.out.println("Enter the elements: ");
        for (int i=0; i<row; i++) {
            for (int j=0; j<col; j++) {
                System.out.print("arr[" + i + "][" + j + "] = ");
                arr[i][j] = input.nextInt();
            }
        }

        // Print original matrix
        System.out.println("Input matrix: ");
        for (int i=0; i<row; i++) {
            for (int j=0; j<col; j++) {
                System.out.print(arr[i][j] + " ");
            }
            System.out.println("");
        }

        // Print Transpose matrix
        System.out.println("Transpose of Input matrix: ");
        for (int i=0; i<row; i++) {
            for (int j=0; j<col; j++) {
                System.out.print(arr[j][i] + " ");
            }
            System.out.println("");
        }
    }
}
```