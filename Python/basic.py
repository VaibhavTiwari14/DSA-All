"""
========================================
 PYTHON BASIC SYNTAX REFERENCE FILE
========================================
"""

# Function example
def add(a, b):
    return a + b

# Output
print("Hello from Python")

# Input: single value
x = int(input())
print("x =", x)

# If-else
if x % 2 == 0:
    print("Even")
else:
    print("Odd")

# For loop
for i in range(3):
    print(i, end=" ")
print()

# While loop
i = 0
while i < 3:
    print(i, end=" ")
    i += 1
print()

# Array (list)
n = int(input())
arr = list(map(int, input().split()))

for val in arr:
    print(val, end=" ")
print()

# Function call
print("Sum =", add(2, 3))
