# Accept a number and find its square root

import math

print('Enter a number to find its root')
input_number = float(input())                      # input() always returns a string

root_number = math.sqrt(input_number)
print('Square Root of', input_number, 'is' + str(root_number), sep=' ')