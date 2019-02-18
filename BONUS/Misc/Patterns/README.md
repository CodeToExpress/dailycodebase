# Patterns

Print the following patterns

## Pattern 1

```
input: 5
output:
*
**
***
****
*****
```

### [Java Implementation](./Pattern1.java)

```js
import java.util.Scanner;

class Pattern1 {
    public static void main(String[] args) {
        Scanner input = new Scanner (System.in);
        System.out.print("Enter n: ");
        int n = input.nextInt();

        for (int i=1; i<=n; i++) {
            for (int j=1; j<=i; j++)
                System.out.print("*");
            System.out.println("");
        }
    }
}
```

## Pattern 2

```
input: n=4
output:
1234
123
12
1
```

### [Java Implementation](./Pattern2.java)

```java
import java.util.*;

class Pattern2 {
    public static void main(String[] args) {
        Scanner input = new Scanner (System.in);
        System.out.print("Enter n: ");
        int n = input.nextInt();

        for (int i=n; i>=1; i--) {
            for (int j=1; j<=i; j++)
                System.out.print(j);
            System.out.println("");
        }
    }
}
```

## Pattern 3

```
input: n=4
1
12
123
1234
1234
123
12
1
```

### [Java Implementation](./Pattern3.java)

```java
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
```