/* @date 03/10/2020
 * @author Prabhat Malhotra
 */

import org.junit.jupiter.api.Test;

/*
 * Solution
 */
public class HammingDistanceSolution {

    public String calculateHammingDistance(String firstString, String secondString) {
        int totalHammingDistance = 0;
        byte[] aByteArray = firstString.getBytes();
        byte[] bByteArray = secondString.getBytes();
        if (firstString.length() == secondString.length()) {
            for (int i = 0; i < aByteArray.length; i++) {
                if (aByteArray[i] != bByteArray[i]) {
                    totalHammingDistance += 1;
                }
            }
            return "Hamming distance between " + firstString + " and " + secondString + " is " + totalHammingDistance;
        }
        return "Strings are not equal in length";
    }

}

/*
 * Test
 */
class HammingDistanceSolutionTest {
    @Test
    public void shouldCalculateHammingDistance() {
        String firstString = "karolin";
        String secondString = "kathrin";
        HammingDistanceSolution hammingDistanceSolution = new HammingDistanceSolution();
        System.out.println(hammingDistanceSolution.calculateHammingDistance(firstString, secondString));
    }
}
