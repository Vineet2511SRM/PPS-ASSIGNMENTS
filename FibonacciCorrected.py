def fibonacci(n):
    if n < 0:
        return "Error!!: Please enter a non-negative integer."
    if n == 0:
        return [0]  # Return a list with the first Fibonacci number for 0 terms
    fib = []
    a, b = 0, 1
    for _ in range(n):
        fib.append(a)
        a, b = b, a + b
    return fib

def main():
    try:
        n = int(input("Enter the number of terms: "))  # User input
        result = fibonacci(n)
        print("Fibonacci sequence:", result)
    except ValueError:
        print("Error: Please enter a valid integer.")

if __name__ == "__main__":
    main()
