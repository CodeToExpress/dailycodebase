User function fizzbuzz(num)
Local result := ""
Local i := 1

  For i := 1 To num

    If i % 3 = 0 .and. i % 5 = 0
        result += "FizzBuzz "
    Elseif i % 5 = 0
        result += "Buzz "
    Elseif  i % 3 = 0
        result += "Fizz "
    EndIf

  Next

  alert(result)

return result
