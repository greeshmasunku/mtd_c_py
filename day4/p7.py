string = input('enter a string: ')

digits = list()

for i in string:
    if i.isdigit():
        digits.append(i)

digits = list(set(digits))
digits.sort(reverse = True)

digits_string = ''.join(digits)
biggest_number = int(digits_string)
print(f'The resultant number is {biggest_number}')
