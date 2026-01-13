print("Running Maths in Python")
n = int(input("Enter the value of n"))

def count_digits(n) :
    count = 0
    while n > 0 : 
        ld = n %10
        count += 1
        n //= 10
    return count;

def reverse_a_number(n) : 
    num = 0;
    while n > 0 :
        lastDigit = n % 10
        num = num*10 + lastDigit
        n //=10
    return num;

def check_palindrome(n) : 
    return True if n == reverse_a_number(n) else False ;

def armstrong_number(n) : 
    sum = 0, num = n
    while n > 0 :
        lastDigit = n % 10
        sum += pow(lastDigit,3)
        n //=10
    return True if n == sum else False;

import math

def print_all_divisors(n):
    if n <= 0:
        return []
        
    arr = []
    for i in range(1, int(math.sqrt(n)) + 1):
        if n % i == 0: 
            arr.append(i)
            if i*i != n: 
                arr.append(n // i)
    
    arr.sort()
    print(arr);

def check_prime(n) : 
    if n <= 1 : return False
    if n <= 3 : return True
    if n%2 == 0 or n%3 == 0 : return False
    for i in range(1, int(math.sqrt(n) +1), 6):
        if n%i == 0 or n%(i+2) == 0 : return False
    return True;

def gcd_hcf(a,b) : 
    if b == 0 : return a
    return gcd_hcf(b, a%b);

def lcm(a,b) : 
    return (a*b) // gcd_hcf(a,b);


print_all_divisors(n)


