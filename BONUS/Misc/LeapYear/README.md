# Leap Year

WAP to check whether the given year is a leap year or not

## Solution

### [Java Implementation](./LeapYear.java)

```java
/**
 * @author MadhavBahl
 * @date 26/01/2019
 */

import java.util.Scanner;

public class LeapYear {
    public static Boolean checkLeapYear (int year) {
        if ((year%4 == 0 && year%100 != 0) || (year%400 == 0))  return true;
        else return false;
    }

    public static void main(String[] args) {
        Scanner input = new Scanner (System.in);
        System.out.println("/* ===== Check Leap Year ===== */");
        System.out.print("\nEnter the year: ");
        int year = input.nextInt();

        if (checkLeapYear(year)) System.out.println("Yes, " + year + " is a Leap Year!");
        else System.out.println("No, " + year + " is not a leap year!");
    }
}
```