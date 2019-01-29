/**
 * @date 03/01/19
 * @author spattk (Sitesh Pattanaik)
 */

import java.util.*;

class StringPermutations {
    
    static void printArr(char[] arr){
        for(char x : arr){
            System.out.print(x);
        }
    }
    
    static void printAllPermutationsUtil(String str, boolean[] visited, char[] res, int index){
        
        if(index==str.length())
        {
            printArr(res);
            System.out.println();
            return;
        }   
        
        for(int i=0;i<str.length();i++)
        {
            if(visited[i]){
                continue;
            }
            res[index] = str.charAt(i);
            visited[i] = true;
            printAllPermutationsUtil(str, visited, res, index+1);
            visited[i] = false;
        }        
    }
    
    static void printAllPermutations(String str){
        int n = str.length();
        boolean[] visited = new boolean[n];
        Arrays.fill(visited, false);        
        char[] res = new char[n];        
        printAllPermutationsUtil(str, visited, res, 0);
    }
    
	public static void main (String[] args) {
		Scanner sc = new Scanner(System.in);
	    String str = sc.next();
	    char[] temp = str.toCharArray();
	    Arrays.sort(temp);
	    str = new String(temp);
	    printAllPermutations(str);
	    System.out.println(); 
	}
}