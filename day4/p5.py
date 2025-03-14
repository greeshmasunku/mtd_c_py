# Program to print the numbers from m to n (m < n) with an increment of p

m = int(input('Enter the M value (start vlue): '))
n = int(input('Enter the N value (end vlue): '))
p = int(input('Enter the P value (increment): '))

i = m
if m > n:
    print('Mostly you gave value to M which is bigger than N')
else:
    for i in range(m, n, p):
        print(i, end= ' ')              # not want the cursor to go the next line
        i += 2              # program counter is incremented by 2 | i is not a part of the range
