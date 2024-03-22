import java.util.Scanner;

public class DivisionAndSum {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        try {
            System.out.print("Enter the numerator: ");
            int numerator = scanner.nextInt();

            System.out.print("Enter the denominator: ");
            int denominator = scanner.nextInt();

            if (denominator == 0) {
                System.out.println("Error: Division by zero");
                System.out.println("Sum: " + (numerator + denominator));
            } else {
                
                double divisionResult = (double) numerator / denominator;
                System.out.println("Division result: " + divisionResult);

                
                System.out.println("Sum: " + (numerator + denominator));
            }
        } catch (Exception e) {
            System.out.println("Error: Please enter valid integers for both numerator and denominator.");
        } finally {
            scanner.close();
        }
    }
}
