use std::io;

fn main() {
    let mut a = String::new();
    let mut b = String::new();

    io::stdin().read_line(&mut a).expect("Failed to read line");
    
    io::stdin().read_line(&mut b).expect("Failed to read line");

    // Convert the input strings to integers
    let a: i32 = a.trim().parse().expect("Please enter a valid number");
    let b: i32 = b.trim().parse().expect("Please enter a valid number");

    let sum = a + b;
    println!("{}",sum);
}
