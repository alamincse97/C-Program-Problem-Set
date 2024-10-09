import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Enter an Integer: ");
        int n = scanner.nextInt();
        
        int count = 0;

        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                count++;
                break;
            }
        }

        if (count == 0) {
            System.out.println("Prime Number");
        } else {
            System.out.println("Not a Prime Number");
        }

        scanner.close();
    }
}
