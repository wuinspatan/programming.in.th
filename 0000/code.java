import java.util.Scanner;

public class Sumof {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("");
        int a = scanner.nextInt();  // Integer input

        System.out.print("");
        int b = scanner.nextInt();  // Integer input

        int sum = a + b;  // Integer sum

        System.out.println(sum);

        scanner.close();
    }
}

// How to run java file 
// ** Name of file match with Class name 

// Open command //

// javac Sumof.java 
// java Sumof