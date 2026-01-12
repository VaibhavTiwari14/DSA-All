
import java.util.Scanner;

public class pattern {
    public static void main(String[] args) {
        System.out.println("Running pattern");
        try (Scanner sc = new Scanner(System.in)) {
            int n = sc.nextInt();
            pattern1(n);
            pattern2(n);
            pattern3(n);
            pattern4(n);
            pattern5(n);
            pattern6(n);
            pattern7(n);
            pattern8(n);
            pattern9(n);
            pattern10(n);
            pattern11(n);
            pattern12(n);
            pattern13(n);
            pattern14(n);
            pattern15(n);
            pattern16(n);
        }
    }

    public static void pattern1(int n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                System.out.print("* ");
            }
            System.out.println();
        }
    }

    public static void pattern2(int n) {
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j <= i ; j++){
                System.out.print("* ");
            }
            System.out.println();
        }
    }

    public static void pattern3(int n) {
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j <= i ; j++){
                System.out.print((j+1)+" ");
            }
            System.out.println();
        }
    }

    public static void pattern4(int n) {
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j <= i ; j++){
                System.out.print((i+1) + " ");
            }
            System.out.println();
        }
    }

    public static void pattern5(int n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < (n - i); j++) {
                System.out.print("* ");
            }
            System.out.println();
        }
    }

    public static void pattern6(int n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < (n - i); j++) {
                System.out.print((j+1)+ " ");
            }
            System.out.println();
        }
    }

    public static void pattern7(int n){
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < (n - i - 1) ; j++){
                System.out.print(" ");
            }
            for (int j = 0; j < 2*i + 1 ; j++) {
                System.out.print("*");
            }
            for (int j = 0; j < (n - i - 1); j++) {
                System.out.print(" ");
            }
            System.out.println();
        }
    }

    public static void pattern8(int n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i; j++) {
                System.out.print(" ");
            }
            for (int j = 0; j < 2*(n-i) ; j++) {
                System.out.print("*");
            }
            for (int j = 0; j < i; j++) {
                System.out.print(" ");
            }
            System.out.println();
        }
    }

    public static void pattern9(int n){
        pattern7(n);
        pattern8(n);
    }

    public static void pattern10(int n){
        for(int i = 0 ; i < n ; i++ ){
            for(int j = 0 ; j < i+1 ; j++){
                System.out.print("*");
            }
            System.out.println();
        }
        for (int i = 0; i < n-1; i++) {
            for (int j = 0; j < n-i-1; j++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }

    public static void pattern11(int n){
        for(int i = 0 ; i < n ; i++){
            int start = i%2 == 0 ? 1 : 0;
            for(int j = 0 ; j <= i ; j++){
                System.out.print(start);
                start = 1 - start;
            }
            System.out.println();
        }
    }

    public static void pattern12(int n){
        int space = (n-1)*2;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j <= i; j++) {
                System.out.println(j+1);
            }
            for (int j = 0; j < space; j++) {
                System.out.print(" ");
            }
            for (int j = i; j >= 0; j--) {
                System.out.println(j+1);
            }
            System.out.println();
            space -=2;
        }
    }

    public static void pattern13(int n) {
        int count = 1;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j <= i; j++) {
                System.out.print(count++ + " ");
            }
            System.out.println();
        }
    }

    public static void pattern14(int n) {
        for (int i = 0; i < n; i++) {
            char ch = 'A';
            for (int j = 0; j <= i; j++) {
                System.out.print((char)ch);
                ch++;
            }
            System.out.println();
        }
    }

    public static void pattern15(int n) {
        for (int i = 0; i < n; i++) {
            char ch = 'A';
            for (int j = 0; j < n - i ; j++) {
                System.out.print((char) ch);
                ch++;
            }
            System.out.println();
        }
    }

    public static void pattern16(int n) {
        for (int i = 0; i < n; i++) {
            char ch = 'A';
            for (int j = 0; j <= i; j++) {
                System.out.print((char) ch);
            }
            ch++;
            System.out.println();
        }
    }
}
