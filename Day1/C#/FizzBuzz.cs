/**
 * @author: imkaka
 * @date: 20/12/2018
 */

 using System;

public class FizzBuzz{

    public static void Main(string[] args){

        Console.WriteLine("/*====== Fizz Buzz ======*/");

        Console.WriteLine("Enter a Number : ");
        int input = Convert.ToInt32(Console.ReadLine());

        for(int i=1; i <= input; ++i){

            string res = "";

            if(i % 3 == 0) res += "Fizz";
            if(i % 5 == 0) res += "Buzz";

            if(res == "") res = i.ToString();

            Console.WriteLine(res);
        }
    }
}
