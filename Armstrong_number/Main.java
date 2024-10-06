import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a number: ");
        int number = scanner.nextInt();
        int temp = number;
        int sumOfCubes = 0;

        while (temp != 0) {
            int r = temp % 10;
            sumOfCubes += Math.pow(r, 3);
            temp /= 10;
        }

        System.out.println("Sum of cubes of digits: " + sumOfCubes);
    }
}
