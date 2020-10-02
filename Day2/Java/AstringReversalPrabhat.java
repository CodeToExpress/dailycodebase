/* @date 02/10/2020
 * @author Prabhat Malhotra
 */
import org.junit.jupiter.api.Test;

/*
 * Solution A - String Reversal
 */
public class AstringReversalPrabhat {
  public String stringReversal(String anyString) {
    byte[] anyStringAsByteArray = anyString.getBytes();
    byte[] byteArrayResult = new byte[anyStringAsByteArray.length];
    for (int i = 0; i < byteArrayResult.length; i++) {
      byteArrayResult[i] = anyStringAsByteArray[anyStringAsByteArray.length - i - 1];
    }
    System.out.println(new String(byteArrayResult));
    return new String(byteArrayResult);
  }
}

/*
 * Test A - String Reversal Test
 */
class AstringReversalPrabhatTest {
  @Test
  public void reverseString() {
    String name = "prabhat";
    AstringReversalPrabhat astringReversalPrabhat = new AstringReversalPrabhat();
    astringReversalPrabhat.stringReversal(name);
  }
}

/*
 * Solution B - Palindrome Check
 */
class BpalindromeCheckPrabhat {
  public void palindromeChek(String randomString) {
    AstringReversalPrabhat astringReversalPrabhat = new AstringReversalPrabhat();
    String reversedString = astringReversalPrabhat.stringReversal(randomString);
    if (reversedString.equals(randomString)) {
      System.out.println(randomString + " is a palindrome.");
    } else {
      System.out.println(randomString + " is not a palindrome.");
    }
  }
}

/*
 * Test A - String Reversal Test
 */
class BpalindromeCheckPrabhatTest {
  @Test
  public void palindromeCheck() {
    String randomString = "LOL";
    BpalindromeCheckPrabhat bpalindromeCheckPrabhat = new BpalindromeCheckPrabhat();
    bpalindromeCheckPrabhat.palindromeChek(randomString);
  }
}
