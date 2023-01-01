use std::io;

enum Shape {
    Circle { radius: f64 },
    Square { side: f64 },
    EquilateralTriangle { side: f64 },
    Rectangle { sides: (f64, f64) },
}

impl Shape {
    fn area(&self) -> f64 {
        match self {
            Shape::Circle { radius } => std::f64::consts::PI * radius * radius,
            Shape::Square { side } => side * side,
            Shape::EquilateralTriangle { side } => (3.0_f64).sqrt() / 4.0 * side * side,
            Shape::Rectangle { sides: (length, breadth) } => length * breadth,
        }
    }
}


fn main() -> io::Result<()> {
    use Shape::*;

    let mut shapes = vec![
        Circle {
            radius: read_f64()?,
        },
        Square { side: read_f64()? },
        EquilateralTriangle { side: read_f64()? },
        Rectangle {
            sides: read_f64_pair()?,
        },
    ];

    shapes.sort_by(|a, b| b.area().partial_cmp(&a.area()).unwrap());

    shapes
        .into_iter()
        .map(|shape| match shape {
            Circle { .. } => "Circle",
            Square { .. } => "Square",
            EquilateralTriangle { .. } => "Triangle",
            Rectangle { .. } => "Rectangle",
        })
        .for_each(|shape| println!("{shape}"));

    Ok(())
}


fn read_f64() -> io::Result<f64> {
    let mut input = String::new();
    io::stdin().read_line(&mut input)?;

    Ok(input.trim().parse().unwrap())
}

fn read_f64_pair() -> io::Result<(f64, f64)> {
    let mut input = String::new();
    io::stdin().read_line(&mut input)?;

    let mut iter = input.trim().split_whitespace();

    Ok((
        iter.next().unwrap().parse().unwrap(),
        iter.next().unwrap().parse().unwrap(),
    ))
}
