/* @date 02/10/2020
 * @author Prabhat Malhotra
 */

import org.junit.jupiter.api.Test;

/*
 * Solution
 */
public class FizzBuzzPrabhat {

  public void fizzBuzz(int n) {
    for (int i = 1; i <= n; i++) {
      if (i % 3 == 0 && i % 5 == 0) {
        System.out.print("FizzBuzz,");
      } else if (i % 3 == 0) {
        System.out.print("Fizz,");
      } else if (i % 5 == 0) {
        System.out.print("Buzz,");
      } else {
        System.out.print(i + ",");
      }
    }
  }
}

/*
 * Test
 */
class FizzBuzzPrabhatTest {
  @Test
  public void shouldPrintFizzBuzz() {
    FizzBuzzPrabhat fizzBuzzPrabhat = new FizzBuzzPrabhat();
    fizzBuzzPrabhat.fizzBuzz(20);
  }
}
