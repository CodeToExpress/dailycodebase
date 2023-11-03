/**
 * @author: d-l-mcbride
 * @date: 10/12/2020
 **/

fun hammingDistance(first: String, second: String ):Int {
    if (first.length != second.length) return -1

    var distance = 0
    for(i in first.indices) {
        if (first[i] != second[i]) distance++
    }
    return distance
}

val DOG = "dog"
val LOG = "log"
val LARRY = "larry"
val LASSI ="lassi"
val EMPTY = ""
val ALSO_EMPTY = ""
val ABCDE = "abcde"
val BADEC = "badec"
val DIFF_ONE ="ab"
val DIFF_TWO ="abcd"

println("Hamming Distance of ${DOG} and ${LOG} = ${hammingDistance(DOG,LOG)}")
println("Hamming Distance of ${LOG} and ${LOG} = ${hammingDistance(LOG,LOG)}")
println("Hamming Distance of ${LARRY} and ${LASSI} = ${hammingDistance(LARRY,LASSI)}")
println("Hamming Distance of ${ABCDE} and ${BADEC} = ${hammingDistance(ABCDE,BADEC)}")
println("Hamming Distance of two empty strings = ${hammingDistance(EMPTY,ALSO_EMPTY)}")
println("Hamming Distance of different length strings = ${hammingDistance(DIFF_ONE,DIFF_TWO)}")
