/* 
  * @author: Ramanpreet Singh <ramanpreet6262@gmail.com> 
  * @github: https://github.com/Ramanpreet6262
  * @date: 20/12/2018
*/


package main

import "fmt"

func main() {
    fmt.Println("Enter a number upto which you want to find Fizzbuzz numbers: ")
    var n int
    _, err := fmt.Scanf("%d", &n)
    
    if err != nil {
            fmt.Println(err)
         }

    
    for i := 1; i <= n; i++ {
        if i % 3 == 0 && i % 5 == 0 {
            fmt.Println("FizzBuzz")
        } else if i % 5 == 0 {
            fmt.Println("Buzz")
        } else if i % 3 == 0 {
            fmt.Println("Fizz")
        } else {
            fmt.Println(i)
        }
    }
}
