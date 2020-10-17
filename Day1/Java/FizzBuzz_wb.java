/*
* @author wboccard
* @date October 7, 2020
*/

public class FizzBuzz_wb {

  public static void main(String[] args){
    int repetitions = 50;
    for (int index = 1; index <= repetitions; index++){
      if (index % 3 == 0 && index % 5 == 0){
        System.out.print("FizzBuzz");
      } else if (index % 3 == 0){
        System.out.print("Fizz");
      } else if (index % 5 == 0){
        System.out.print("Buzz");
      } else {
        System.out.printf("%d", index);
      }
      if (index != repetitions){
        System.out.print(", ");
      } else {
        System.out.println();
      }
    }  
   }
}
