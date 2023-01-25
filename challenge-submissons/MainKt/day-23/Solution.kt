import java.math.BigInteger

fun main() {
    val n = readln().trim().toBigInteger()

    println(n.findNextPalindromeOrNull() ?: "NA")
}

fun String.toBigInteger() = BigInteger(this)

fun BigInteger.reversed() = this.toString().reversed().toBigInteger()

fun BigInteger.findNextPalindromeOrNull(maxIterations: Int = 10_000) =
    generateSequence(this) { it + it.reversed() }
        .take(maxIterations)
        .firstOrNull { it == it.reversed() }
