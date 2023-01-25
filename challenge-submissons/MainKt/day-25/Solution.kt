fun main() {
    val standardLetterFrequencies = mapOf(
        'A' to 8.2, 'B' to 1.5,
        'C' to 2.8, 'D' to 4.3,
        'E' to 13.0, 'F' to 2.2,
        'G' to 2.0, 'H' to 6.1,
        'I' to 7.0, 'J' to 0.15,
        'K' to 0.77, 'L' to 4.0,
        'M' to 2.4, 'N' to 6.7,
        'O' to 7.5, 'P' to 1.9,
        'Q' to 0.095, 'R' to 6.0,
        'S' to 6.3, 'T' to 9.1,
        'U' to 2.8, 'V' to 0.98,
        'W' to 2.4, 'X' to 0.15,
        'Y' to 2.0, 'Z' to 0.074
    )
        .toList()
        .sortedByDescending { it.second }
        .toMap()

    val cipherText = readln().trim()

    val cipherLetterFrequencies = cipherText
        .filter { it.isLetter() }
        .uppercase()
        .groupBy { it }
        .mapValues { it.value.size.toDouble() / cipherText.length * 100 }
        .toList()
        .sortedByDescending { it.second }
        .toMap()

    val substitutionMapping = (cipherLetterFrequencies.keys zip standardLetterFrequencies.keys).toMap()
    val decipheredText = cipherText
        .map { substitutionMapping[it] ?: substitutionMapping[it.uppercaseChar()]?.lowercaseChar() ?: it }
        .joinToString("")

    println(decipheredText)
}
