def find_area_rectangle(length, breadth):
    return length * breadth
   # pass        when no body given

length = int(input('Enter the length of the Rectangle: '))
breadth = int(input('Enter the breadth of the Rectangle: '))
area = find_area_rectangle(length, breadth)
print(f'Area of the Recatangle = {area}')