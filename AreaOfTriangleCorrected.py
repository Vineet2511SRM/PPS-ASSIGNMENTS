def triangle_area(base, height):
    if base < 0 or height < 0:
        return None
    return base * height / 2

def main():
    base = float(input("Enter the base of the triangle: "))
    height = float(input("Enter the height of the triangle: "))
    area = triangle_area(base, height)
    
    if area is None:
        print("The area of the triangle cannot be negative.")
    else:
        print(f'The area of the triangle is: {area}')

if __name__ == "__main__":
    main()
