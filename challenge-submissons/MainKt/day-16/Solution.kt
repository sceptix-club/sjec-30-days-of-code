fun main() {
    val n = readln().trim().toInt()
    val m = readln().trim().toInt()
    val trees = readln().trim().split(" ").map { it.toInt() }

    val maxCherries = trees
        .windowed(m) { it.sum() }
        .max()
    println(maxCherries)
}

