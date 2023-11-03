/**
 * @author: d-l-mcbride
 * @date: 10/11/2020
 **/

fun numberOfVowels(subject: String):Int{
    val vowels = hashSetOf<Char>('a','e','i','o','u')
    var count = 0
    subject.forEach {
        when(it.toLowerCase()) {
            in vowels -> count++
        }
    }
    return count
}

fun maxChars(subject: String):Char {
    var maxChar = subject[0]
    var maxCount = 0
    var count:Int
    for(i in 0 until subject.length -1) {
        count = 0
        for(j in i+1 until subject.length) {
            if (subject[i] == subject[j]) count++
        }
        if( count > maxCount) {
            maxCount = count
            maxChar = subject[i]
        }
    }
    return maxChar
}



val TWO_VOWELS = "hello"
val TWO_VOWELS_WITH_CAPS = "HELLO"
val NO_VOWELS = "qrzmtlnz"
println("${TWO_VOWELS} contains ${numberOfVowels(TWO_VOWELS)} vowels.")
println("${TWO_VOWELS_WITH_CAPS} contains ${numberOfVowels(TWO_VOWELS_WITH_CAPS)} vowels.")
println("${NO_VOWELS} contains ${numberOfVowels(NO_VOWELS)} vowels.")

val THREE_MID = "helllo"
val ONE_EACH = "abcd"
val FOUR_END = "byeeee"
val FOUR_BEG = "yyyyes"
println("The letter with the most occurences in ${THREE_MID} is ${maxChars(THREE_MID)}")
println("The letter with the most occurences in ${ONE_EACH} is ${maxChars(ONE_EACH)}")
println("The letter with the most occurences in ${FOUR_END} is ${maxChars(FOUR_END)}")
println("The letter with the most occurences in ${FOUR_BEG} is ${maxChars(FOUR_BEG)}")
