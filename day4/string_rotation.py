input_string = input('Enter your string (it should contain word and integers which is seperated by a \':\'): ')
values = input_string.split(':')
string_part = values[0]

sum = 0
for char in values[1]:
    sum = int(char) ** 2
    
print(sum)

if sum % 2 == 0:
    string_part = string_part[-1] + string_part[:-1]
else:
    string_part = string_part[2:] + string_part[:2]


print(string_part)