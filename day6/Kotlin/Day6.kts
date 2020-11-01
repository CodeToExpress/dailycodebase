/**
 * @author: d-l-mcbride
 * @date: 10/30/2020
 **/

fun capitalizeEachWord(sentence: String): String {
    if (sentence.length == 0) return sentence

    return sentence.split(" ").map {
        it.capitalize()
    }.joinToString(" ")
}

fun reverseEachWords(sentence : String):String {
    if (sentence.length == 0) return sentence

    return sentence.split(" ").map {
        it.reversed()
    }.joinToString(" ")
}

fun anagramCheck(firstWord: String, secondWord: String): Boolean {
    if(firstWord.length != secondWord.length) return false
    var temp = secondWord
    firstWord.forEach {
        if(temp.contains(it)) temp = temp.replaceFirst(it.toString(),"")
    }
    return temp.length == 0
}

val testSentence = "this all is capitalized"
val shortSentence ="short"
val emptySentence =""

println("Capitalize Each Word Tests")
println(capitalizeEachWord(testSentence))
println(capitalizeEachWord(shortSentence))
println(capitalizeEachWord(emptySentence))

println("Reverse Each Word Tests")
println(reverseEachWords(testSentence))
println(reverseEachWords(shortSentence))
println(reverseEachWords(emptySentence))

println("Anagram Tests")
println("Is anagram ${anagramCheck("one","one")}")
println("Is anagram ${anagramCheck("one","oNe")}")
println("Is anagram ${anagramCheck("exit","xeti")}")
println("Is anagram ${anagramCheck("exxit","xetix")}")
println("Is anagram ${anagramCheck("exxit","retix")}")
