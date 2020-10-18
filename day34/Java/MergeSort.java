/**
 * @author Lucas Freire(ldrf)
 * @date 16/10/2020
 */

import java.util.Arrays;

public class MergeSort {

	public static void main(String[] args) {
		int[] arrayToOrder = new int[]{1, 5, 2, 7, 3, 4, 8, 9, 6};
		System.out.println("Array before sorting");
		System.out.println(Arrays.toString(arrayToOrder));
		int startIndex = 0;
		int highIdex = arrayToOrder.length - 1;
		mergeSort(arrayToOrder, startIndex, highIdex);
		System.out.println("Array after sorting");
		System.out.println(Arrays.toString(arrayToOrder));
	}

	private static void mergeSort(int[] arrayToOrder, int lowIndex,
			int highIndex) {
		if (lowIndex < highIndex) {
			int firstMidIndex = (lowIndex + highIndex) / 2;
			mergeSort(arrayToOrder, lowIndex, firstMidIndex);
			int secondMidIndex = firstMidIndex + 1;
			mergeSort(arrayToOrder, secondMidIndex, highIndex);
			merge(arrayToOrder, lowIndex, firstMidIndex, highIndex);
		}
	}

	private static void merge(int[] arrayToOrder, int lowIndex, int midIndex,
			int highIndex) {
		int leftSubArraySize = (midIndex - lowIndex) + 1;
		int rightSubArraySize = highIndex - midIndex;
		int[] leftArray = getArray(arrayToOrder, leftSubArraySize, lowIndex);
		int[] rightArray = getArray(arrayToOrder, rightSubArraySize,
				midIndex + 1);
		int leftCounter = 0;
		int rightCounter = 0;
		while ((leftCounter < leftSubArraySize)
				&& (rightCounter < rightSubArraySize)) {
			if (leftArray[leftCounter] <= rightArray[rightCounter]) {
				arrayToOrder[lowIndex] = leftArray[leftCounter];
				++leftCounter;
			} else {
				arrayToOrder[lowIndex] = rightArray[rightCounter];
				++rightCounter;
			}
			++lowIndex;

		}

		lowIndex = remainingElements(arrayToOrder, lowIndex, leftSubArraySize,
				leftArray, leftCounter);
		remainingElements(arrayToOrder, lowIndex, rightSubArraySize, rightArray,
				rightCounter);

	}

	private static int[] getArray(int[] arrayToOrder, int arraySideSize,
			int startIndex) {
		int[] sideArray = new int[arraySideSize];
		for (int i = 0; i < sideArray.length; i++) {
			sideArray[i] = arrayToOrder[startIndex + i];
		}
		return sideArray;
	}

	private static int remainingElements(int[] arrayToOrder, int startIndex,
			int subArraySizeSide, int[] sideArray, int sideCounter) {
		while (sideCounter < subArraySizeSide) {
			arrayToOrder[startIndex] = sideArray[sideCounter];
			++startIndex;
			++sideCounter;
		}
		return startIndex;
	}

}
