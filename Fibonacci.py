def fibonacci(n):
    fib = []
    a, b = 0, 1
    for _ in range(n):
        fib.append(a)
        a, b = b, a + b
    return fib  

def main():
    n = int(input("Enter the number of terms: "))  
    print("Fibonacci sequence:", fibonacci(n))

if __name__ == "__main__":
    main()
'''
Correct test case:
Input: 5
Output: [0,1,1,2,3](Expected)

Refute test case:
Input: 0/-4
Expected Output: [0]/Please enter a non-negative integer
Actual Output: [](Unexpected)
'''