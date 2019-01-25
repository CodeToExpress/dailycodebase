# Circle Area

WAP to read the radius and print the area of a circle

## Solution

### [Java Implementation](./CircleArea.java)

```java
/**
 * @author MadhavBahlMD
 * @date 25/01/2019
 */

import java.util.Scanner;

public class CircleArea {
    public static double area (double radius) {
        return Math.PI*radius*radius;
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("/* ===== Area of Circle ===== */");
        System.out.print("\nEnter the radius: ");
        double radius = input.nextDouble();
        System.out.println("Area of circle is: " + area(radius));
    }
}
```