use std::io;

fn main() {

    let mut n = String::new();
    io::stdin()
        .read_line(&mut n)
        .expect("Failed to read 'n'");
    let n: i32 = n.trim()
                  .parse()
                  .expect("Failed to parse 'n'");
    
    let mut numbers = String::new();
    io::stdin()
        .read_line(&mut numbers)
        .expect("Failed to read 'numbers'");
    let numbers: Vec<_> = numbers.trim()
                                   .split_whitespace()
                                   .map(|number| number.parse::<f64>().expect("Failed to parse 'numbers'"))
                                   .collect();
    
    let average = numbers.iter().sum::<f64>() / n as f64;

    numbers.iter()
           .filter(|&&number| number > average)
           .for_each(|number| print!("{number} "));
    
}
