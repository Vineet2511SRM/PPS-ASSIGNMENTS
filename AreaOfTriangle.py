def triangle_area(base, height):
    return base * height / 2

def main():
    base = float(input("Enter the base of the triangle: "))
    height = float(input("Enter the height of the triangle: "))
    area = triangle_area(base, height)
    print(f'The area of the triangle is: {area}')

if __name__ == "__main__":
    main()
'''
Correct test case
Input: 5(base),10(height)
Output: The area of triangle is: 25.0(Expected)

Refute test case
Input: -6(base),15(height)/any string like "abc" or anything
Expected output: "INVALID INPUT. PLEASE ENTER A POSITIVE FLOAT VALUE."
Actual output: -45.0(Unexpected)/ValueError: could not convert string to the float: 'abc'
'''
