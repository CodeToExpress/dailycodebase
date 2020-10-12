/**
 * @author: d-l-mcbride
 * @date: 10/11/2020
 **/

fun fizzBuzz(fizzList: List<Int>) {
    var output: String
    fizzList.forEach {
        output = when {
            it % 15 == 0 -> "FizzBuzz"
            it % 5 == 0 -> "Buzz"
            it % 3 == 0 -> "Fizz"
            else -> "${it}"
        }
        println(output)
    }
}

fizzBuzz((0..15).toList())
