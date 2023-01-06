fun main() {
    val inputText = readln().trim()
    val letterCount = inputText.count { it.isLetter() }

    val letterFrequencies = inputText
        .uppercase()
        .filter { it.isLetter() }
        .groupBy { it }
        .mapValues { (_, letters) -> letters.size }
        .entries

    letterFrequencies
        .sortedByDescending { (_, frequency) -> frequency }
        .take(5)
        .forEach { (letter, frequency) ->
            val percentage = frequency.toDouble() / letterCount * 100
            println("${letter}: $percentage%")
        }
}
