fun main() {
    val m = readln().trim().toInt()
    val n = readln().trim().toInt()

    println(rollingFibonacci(n, m))
}

fun rollingFibonacci(n: Int, m: Int): Int {
    val memo = (1..n)
        .associateWith { if (it == n) 1 else 0 }
        .toMutableMap()

    fun getMthTerm(m: Int): Int = memo.getOrPut(m) {
        (1..n).sumOf { getMthTerm(m - it) }
    }

    return getMthTerm(m)
}
