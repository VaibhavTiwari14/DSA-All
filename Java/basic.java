import java.util.Scanner;

/*
====================================================
 JAVA BASIC SYNTAX REFERENCE FILE
 Purpose:
 - Learn Java syntax
 - Covers input/output, if-else, loops, arrays
 - Beginner-friendly with comments
====================================================
 */
class basic {

    public static void main(String[] args) {

        // -----------------------------
        // OUTPUT
        // -----------------------------
        try ( // Scanner for input
                Scanner sc = new Scanner(System.in)) {
            // -----------------------------
            // OUTPUT
            // -----------------------------
            System.out.println("Hello from Java");
            // -----------------------------
            // INPUT: single integer
            // -----------------------------
            int x = sc.nextInt();
            System.out.println("x = " + x);
            // -----------------------------
            // IF - ELSE
            // -----------------------------
            if (x % 2 == 0) {
                System.out.println("Even");
            } else {
                System.out.println("Odd");
            }   // -----------------------------
            // FOR LOOP
            // -----------------------------
            for (int i = 0; i < 3; i++) {
                System.out.print(i + " ");
            }   System.out.println();
            // -----------------------------
            // WHILE LOOP
            // -----------------------------
            int i = 0;
            while (i < 3) {
                System.out.print(i + " ");
                i++;
            }   System.out.println();
            // -----------------------------
            // ARRAY INPUT
            // -----------------------------
            int n = sc.nextInt();
            int[] arr = new int[n];
            for (i = 0; i < n; i++) {
                arr[i] = sc.nextInt();
            }   // -----------------------------
            // ARRAY OUTPUT
            // -----------------------------
            for (i = 0; i < n; i++) {
                System.out.print(arr[i] + " ");
            }   System.out.println();
            // -----------------------------
            // PROGRAM END
            // -----------------------------
        }
    }
}
