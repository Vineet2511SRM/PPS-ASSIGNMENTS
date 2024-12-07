def triangle_area(base, height):
    if base < 0 or height < 0:
        return "INVALID INPUT. PLEASE ENTER A POSITIVE FLOAT VALUE."  # Handle negative inputs
    return base * height / 2

def main():
    try:
        base = float(input("Enter the base of the triangle: "))  # User input
        height = float(input("Enter the height of the triangle: "))  # User input
        
        area = triangle_area(base, height)
        
        if isinstance(area, str):  # Check for error messages
            print(area)
        else:
            print(f'The area of the triangle is: {area}')

    except ValueError:
        print("INVALID INPUT. PLEASE ENTER A POSITIVE FLOAT VALUE.")  # Handle non-float inputs

if __name__ == "__main__":
    main()
