fun main() {
    val romanNumeral = readln().trim()

    val romanToArabic = mapOf(
        'I' to 1,
        'V' to 5,
        'X' to 10,
        'L' to 50,
        'C' to 100,
        'D' to 500,
        'M' to 1000
    )

    if (romanNumeral.any { it !in romanToArabic }) {
        println("Invalid Roman numeral")
    } else {
        val arabicNumeral =
            romanNumeral
                .map { romanToArabic[it]!! }
                .plus(0)
                .reversed()
                .zipWithNext { a, b -> if (a <= b) b else -b }
                .sum()
        println(arabicNumeral)
    }
}

