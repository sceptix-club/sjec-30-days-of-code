fun main() {
    val text = readln().trim()

    val characterMapping = ('a'..'z')
        .associateWith { ('z'.code + 'a'.code - it.code).toChar() }

    val encodedText = text
        .map {
            characterMapping[it] ?: characterMapping[it.lowercaseChar()]?.uppercaseChar() ?: it
        }
        .joinToString("")

    println(encodedText)
}
