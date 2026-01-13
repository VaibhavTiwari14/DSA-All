
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

public class Maths {
    public static void main(String[] args) {
        System.out.println("Running Maths");
    }

    public static int countDigits(int n) {
        // return (int) Math.log10(n) + 1;
        int count = 0;
        while(n > 0) {
            // int lastDigit = n % 10;
            count++;
            n /=10;
        }
        return count;
    }

    public static int reverseANumber(int n) {
        int num = 0;
        while (n > 0) {
            int lastDigit = n % 10;
            num = (num*10) + lastDigit;
            n /= 10;
        }
        return num;
    }

    public static boolean checkPalindrome(int n) {
        return n == reverseANumber(n);
    }

    public static boolean armstrongNumber(int n) {
        int num = n, sum = 0;
        while(num > 0){
            int lastDigit = num %10;
            sum += (int) Math.pow(lastDigit,3);
            num /=10;
        }
        return n == sum;
    }

    public static void printAllDivisors(int n) {
        List<Integer> list = new ArrayList<>();
        for(int i = 1 ; i*i <= n ; i++){
            if(n%i == 0){
                list.add(i);
                if( i*i != n ) list.add(n/i);
            }
        }
        Collections.sort(list);
        System.out.println(list);
    }

    public static boolean checkPrime(int n) {
        if(n <= 1) return false;
        if(n <= 3) return true;
        if(n%2 == 0 || n%3 == 0) return false;
        for(int i = 5 ; i*i <= n ; i+=6){
            if(n%i == 0 || n%(i+2) == 0) return false;
        }
        return true;
    }

    public static int gcdHcf(int a, int b) {
        if(b == 0) return a;
        return gcdHcf(b, a%b);
    }

    public static int lcm(int a, int b) {
        return (a*b)/gcdHcf(a, b);
    }

}
