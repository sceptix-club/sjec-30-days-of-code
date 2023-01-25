fun main() {
    val startNumber = readln().trim().toInt()
    val endNumber = readln().trim().toInt()

    val numberWithMostSteps =
        (startNumber..endNumber)
            .maxBy { stepsToReachOne(it) }

    println(numberWithMostSteps)
}

fun stepsToReachOne(n: Int): Int =
    when {
        n == 1 -> 0
        n % 2 == 0 -> 1 + stepsToReachOne(n / 2)
        else -> 1 + stepsToReachOne(3 * n + 1)
    }
