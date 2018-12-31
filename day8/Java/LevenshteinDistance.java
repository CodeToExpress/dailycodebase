/**
 * @author: aaditkamat
 * @date: 31/12/2018
 */

import java.util.Arrays;
import java.util.Scanner;

class LevenshteinDistance {
    public static int ind(char m, char n) {
        return m == n ? 0 : 1;
    }

    public static int dist(String first, String second) {
        int firstLength = first.length(), secondLength = second.length();
        int[][] m = new int[firstLength + 1][secondLength + 1];
        for (int i = 1; i <= firstLength; i++) {
            m[i][0] = i;
        }
        for (int i = 0; i <= secondLength; i++) {
            m[0][i] = i;
        }
        for (int i = 1; i <= firstLength; i++) {
            for (int j = 1; j <= secondLength; j++) {
                int[] values = { m[i - 1][j] + 1, m[i][j - 1] + 1, m[i - 1][j - 1] + ind(first.charAt(i - 1), second.charAt(j - 1)) };
                Arrays.sort(values);
                m[i][j] = values[0];
            }
        }
        return m[firstLength][secondLength];
    }
    public static void main(String[] args) {
        String first, second;
        Scanner input = new Scanner(System.in);
        System.out.println("Enter two strings: ");
        first = input.next();
        second = input.next();
        System.out.printf("The Levenshtein distance between \"%s\" and \"%s\" is: %d\n", first, second, dist(first, second));
    }
}

