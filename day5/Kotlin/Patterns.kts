/**
 * @author: d-l-mcbride
 * @date: 10/13/2020
 **/

fun patternOne(lines: Int) {
    for(i in 1..lines){
        for(j in 1..i){
            print(if (j != i) "${j} " else j )
        }
        println()
    }
}
fun patternTwo(lines: Int) {
    var count = 1
    for(i in 1..lines){
        for(j in 1..i){
           print( if(j != i) "${count++} " else count++)
        }
        println()
    }
}
fun patterThree(longestLine: Int){
    (1..(longestLine*2-1)).forEach {line ->
        if(line<=5) (1..line).forEach { pos ->print("${pos} ") } else (1..(2*longestLine-line)).forEach {less ->print("${less} ") }
        println()
    }
}
patternOne(5)
patternTwo(lines = 4)
patterThree(5)
