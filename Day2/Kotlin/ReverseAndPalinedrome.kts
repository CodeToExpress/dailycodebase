/**
 * @author: d-l-mcbride
 * @date: 10/11/2020
 **/

fun reverse(subject:String):String {
        var reversed = StringBuilder()

        for( j in (subject.length -1) downTo 0){
            reversed.append(subject[j])
        }
        return reversed.toString()
}


fun palindrome(subject:String){
    val reversed = reverse(subject)
    if (reversed == subject) println("${subject} is a palindrome") else println("${subject} is not a palindrome")
}

val hello = "Hello"
val goodbye = "Goodbye"
val single = "S"

println("Reverse String Tests")
println("${hello} reversed is ${reverse(hello)}")
println("${goodbye} reversed is ${reverse(goodbye)}")
println ("${single} reversed is ${reverse(single)}")

println("\n\nPalindrome Tests")
palindrome("I")
palindrome("otto")
palindrome("tacocat")
palindrome("dog")
