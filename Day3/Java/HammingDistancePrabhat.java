/* @date 03/10/2020
 * @author Prabhat Malhotra
 */

import org.junit.jupiter.api.Test;

/*
 * Solution
 */
public class HammingDistancePrabhat {

    public int calculateHammingDistance(String firstString, String secondString){
        int totalChange = 0;
        byte[] aByteArray = firstString.getBytes();
        byte[] bByteArray = secondString.getBytes();

        for(int i = 0; i < aByteArray.length; i++){
            if(aByteArray[i] != bByteArray[i]){
                totalChange += 1;
            }
        }
        return totalChange;
    }

}

/*
 * Test
 */
class HammingDistancePrabhatTest {

   @Test
    public  void shouldCalculateHammingDistance(){
        String firstString = "karolin";
        String secondString = "kathrin";
        HammingDistancePrabhat hammingDistancePrabhat = new HammingDistancePrabhat();
       System.out.println("Hamming distance between " +firstString+ " and " +secondString+ " is "+ hammingDistancePrabhat.calculateHammingDistance(firstString,secondString));
    }
}
