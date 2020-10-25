import java.util.Scanner;

/**
 * @author MadhavBahl
 * @date 25/01/2019
 */

public class OddEven {
    public static void main(String[] args) {
        Scanner input = new Scanner (System.in);
        System.out.println("/* ===== Check Odd/Even ===== */");
        System.out.print("\nEnter the number: ");
        int num = input.nextInt();

        if (num%2 == 0) System.out.println(num + " is Even!");
        else System.out.println(num + " is Odd!");
    }
}
