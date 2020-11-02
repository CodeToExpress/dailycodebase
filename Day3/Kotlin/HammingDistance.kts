/**
 * Kotlin solution to calculate the hamming distance between two Strings.
 *
 * The Hamming distance between two strings of equal length is the number of positions at which the corresponding symbols
 * are different.
 *
 * @author martintrollip
 * @since 2020/10/27 5:43 AM
 */
fun calculateHammingDistance(first: String, second: String): Int {
    return first.hammingDistance(second)
}

/**
 * Extension function to calculate the hamming distance between two strings.
 *
 * Returns -1 when the lengths are different and the hamming distance is undefined.
 */
fun String.hammingDistance(other: String): Int {
    if (this.length != other.length) {
        return -1
    }

    return this.mapIndexed { index, thisChar ->
        if (thisChar == other[index]) {
            0
        } else {
            1
        }
    }.sumBy { it }
}

print("/* ========================================= */\n" +
        "/* =========== Daily Codes Day 3 =========== */\n" +
        "/* ============= CodeToExpress ============= */\n" +
        "/* ========================================= */\n" +
        "/*                                           */\n" +
        "                Day - 3 Question               \n" +
        "            Hamming Distance Problem           \n" +
        "                                               \n" +
        "            Hamming Distance Problem           \n" +
        "                                               \n" +
        "  The Hamming distance between two strings of  \n" +
        "   equal length is the number of positions at  \n" +
        " which the corresponding symbols are different.\n" +
        "                                               \n")

/**
 * The hamming distance between
 *   - "karolin" and "kathrin" is 3
 *   - "karolin" and "kerstin" is 3
 *   - 1011101 and 1001001 is 2
 *   - 2173896 and 2233796 is 3
 */

println("The hamming distance between:\n")
println("   - \"karolin\" and \"kathrin\" is ${calculateHammingDistance("karolin", "kathrin")}\n")
println("   - \"karolin\" and \"kerstin\" is ${calculateHammingDistance("karolin", "kerstin")}\n")
println("   - \"1011101\" and \"1001001\" is ${calculateHammingDistance("1011101", "1001001")}\n")
println("   - \"2173896\" and \"2233796\" is ${calculateHammingDistance("2173896", "2233796")}\n")
println("   - \"12345\" and \"12345\"     is ${calculateHammingDistance("12345", "12345")}\n")
println("   - \"12345\" and \"123456789\" is ${calculateHammingDistance("12345", "123456789")}\n")
