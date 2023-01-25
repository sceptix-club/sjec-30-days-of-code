fun main() {
    val a = readln().toInt()
    val b = readln().toInt()

    (a..b).forEach {
        when {
            it % 3 == 0 -> println("Foo")
            it % 2 == 0 -> println("Bar")
            else -> println("Baz")
        }
    }
}
