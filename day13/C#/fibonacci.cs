/**
 * @author: sagunjaiswal
 * @date: 20/09/2020
 */
using System;  
namespace FibonacciSeries  
{  
      class Program  
      {  
            public static int FibonacciSeries(int n)  
            {  
                  if (n == 0) 
                    return 1; 
                  if (n == 1)
                    return 1;
                  return FibonacciSeries(n - 1) + FibonacciSeries(n - 2);  
            }  
            public static void Main(string[] args)  
            {  
                  Console.Write("input : ");  
                  int length = Convert.ToInt32(Console.ReadLine()); 
                  Console.Write("output : \n"); 
                  Console.Write("The {0}th term of fibonacci series is : {1} \n",length,FibonacciSeries(length-1));  
                  Console.Write("The sequence is : ");
                  for (int i = 0; i < length; i++)  
                  {  
                        Console.Write("{0} ", FibonacciSeries(i));  
                  }  
                
                  Console.ReadKey();  
            }  
      }  
} 