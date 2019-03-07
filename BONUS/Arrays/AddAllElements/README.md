# Add All Elements

WAP to add all the elements in the given 2D array

## Solution

### [Java Implementation](./AddAllElements.java)

```java
import java.util.*;

class Play {
    public static void main(String[] args) {
        // Given array is stored in arr[][]
        int[][] arr = { {1, 2, 3, 4}, {1, 2, 3}, {1, 2}, {1} };

        int sum = 0;
        System.out.println("The given 2D array is: ");
        for (int[] row: arr) {
            for (int element: row) {
                System.out.print(element + " ");
                sum += element;
            }
            System.out.println("");
        }

        System.out.println("The sum of elements is = " + sum);
    }
}
```