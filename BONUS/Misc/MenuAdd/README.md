# Menu Add

Provide the option of adding two numbers to the user until the user wants to exit

## Solution

### [Java Implementation](./MenuAdd.java)

```java
import java.util.Scanner;

class MenuAdd {
    public static void main(String[] args) {
        Scanner input = new Scanner (System.in);
        char choice = 'n';

        do {
            System.out.print("Enter the first number: ");
            int n1 = input.nextInt();
            System.out.print("Enter the second number: ");
            int n2 = input.nextInt();

            System.out.println(n1 + " + " + n2 + " = " + (n1+n2));

            System.out.println("do you want to continue? (y/n)");
            choice = input.next().charAt(0);
        } while (choice == 'y');
    }
}
```