/**
 * @author: sagunjaiswal
 * @date: 20/09/2020
 */
using System; 
  
class day13 { 
    
    static int factorial(int n) 
    { 
        if (n == 0) 
            return 1; 
  
        return n * factorial(n - 1); 
    } 
  
    
    public static void Main() 
    { 
        String val;
        Console.WriteLine("Input : ");
        val = Console.ReadLine();
        
        int num = Convert.ToInt32(val);
        Console.WriteLine("Output:" + factorial(num)); 
    } 
} 