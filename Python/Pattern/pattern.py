print("Running pattern in Python")
n = int(input("Enter your number"))

def pattern1 (n) : 
    for i in range(n) : 
        for j in range(5):
            print("* ", end="")  
        print()    

def pattern2 (n) :
    for i in range(n) :
        for j in range(i+1) : 
            print("* ", end="")    
        print()

def pattern3(n) : 
    for i in range(n) : 
        for j in range(i+1) :  
            print((j+1) + " ", end="")
        print()

def pattern4(n) : 
    for i in range(n) : 
        for j in range(i+1) : 
            print((i + 1) + " ", end="")
        print()

def pattern5(n) :
    for i in range(n) :
        for j in range(n-i) :
            print("* ", end="");
        print();

def pattern6(n) :
    for i in range(n) :
        for j in range(n-i) :
            print((j+1) + " ", end="");
        print();

def pattern7(n) : 
    for i in range(n) : 
        for j in range(n-i-1) : 
            print(" ", end="");
        for j in range(2*i + 1) : 
            print("*", end="");
        for j in range(n-i-1) : 
            print(" ", end="");
        print();

def pattern8(n) : 
    for i in range(n) : 
        for j in range(i) : 
            print(" ", end="");
        for j in range(2*(n-i)) : 
            print("*", end="");
        for j in range(i) : 
            print(" ", end="");
        print();
        
def pattern9(n) : 
    pattern7(n);
    pattern8(n);

def pattern10(n) : 
    for i in range(n) : 
        for j in range(i+1) : 
            print("* ", end="");
        print();
    for i in range(n-1) : 
        for j in range(n - i - 1) : 
            print("* ", end="");
        print();

def pattern11(n) : 
    for i in range(n) : 
        start = 1 if i % 2 == 0 else 0;
        for j in range(i+1) : 
            print(start, end="");
            start = 1- start;
        print();

def pattern12(n):
    space = 2 * (n - 1)
    for i in range(n):
        for j in range(i + 1):
            print(j + 1, end="");
        for j in range(space):
            print(" ", end="");
        for j in range(i, 0, -1):
            print(j, end="");
        print();
        space -= 2;

def pattern13(n) : 
    count = 1;
    for i in range(n) : 
        for j in  range(i+1) : 
            print(count, end="");
            count +=1;
        print();

def pattern14(n) :
    for i in range(n) : 
        c = ord('A')
        for j in range(i+1) :
            print(chr(c) + " ", end="");
            c +=1;
        print();

def pattern15(n) :
    for i in range(n) : 
        c = ord('A')
        for j in range(n-i) :
            print(chr(c) + " ", end="");
            c += 1;
        print();

def pattern16(n) : 
    for i in range(n) : 
        c = ord('A');
        for j in range(i+1): 
            print(chr(c), end="");
        print();
        c+=1;

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