fun main() {
    val n = readln().toInt()

    for (i in 0 until n) {
        readln()
            .split(' ')
            .map { it.toInt() }
            .sorted()[i % 3]
            .also { println(it) }
    }
}
