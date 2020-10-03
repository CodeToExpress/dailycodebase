/* @date 03/10/2020
 * @author Prabhat Malhotra
 */

import org.junit.jupiter.api.Test;

import static org.junit.jupiter.api.Assertions.*;

/*
 * Solution A - String Reversal
 */
public class StringReversal {
    public String stringReversal(String randomString) {
        byte[] randomStringAsByteArray = randomString.getBytes();
        byte[] byteArrayResult = new byte[randomStringAsByteArray.length];
        for (int i = 0; i < byteArrayResult.length; i++) {
            byteArrayResult[i] = randomStringAsByteArray[randomStringAsByteArray.length - i - 1];
        }
        return new String(byteArrayResult);
    }
}

/*
 * Test A - String Reversal
 */
class StringReversalTest {
    @Test
    public void reverseString() {
        String randomString = "prabhat";
        String expectedString = "tahbarp";
        StringReversal stringReversal = new StringReversal();
        System.out.println("The reverse of string " + randomString + " is " + stringReversal.stringReversal(randomString));
        assertEquals(expectedString,stringReversal.stringReversal(randomString));
    }
}

/*
 * Solution B - Palindrome Check
 */
class PalindromeCheck {
    public boolean palindromeChek(String randomString) {
        StringReversal stringReversal = new StringReversal();
        String reversedString = stringReversal.stringReversal(randomString);
        return reversedString.equals(randomString);
    }
}

/*
 * Test B - Palindrome Check
 */
class PalindromeCheckTest {
    @Test
    public void shouldBePalindrome() {
        String randomString = "LOL";
        PalindromeCheck palindromeCheck = new PalindromeCheck();
        if (palindromeCheck.palindromeChek(randomString)) {
            System.out.println(randomString + " is a palindrome");
        }
        assertTrue(palindromeCheck.palindromeChek(randomString));
    }

    @Test
    public void shouldNotToBePalindrome() {
        String randomString = "HOT";
        PalindromeCheck palindromeCheck = new PalindromeCheck();
        if (!palindromeCheck.palindromeChek(randomString)) {
            System.out.println(randomString + " is not a palindrome");
        }
        assertFalse(palindromeCheck.palindromeChek(randomString));
    }
}
