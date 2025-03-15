def my_function(my_numbers):
    my_numbers[0] = 1000
    my_numbers[-1] = 10000

print('Enter space seperated numbers of your choice')

# values = input().split()

numbers = [int(element) for element in input().split()] #read input, splitting, stored in a random list, iterating using for, and converted and stored in our list.

print(numbers)
my_function(numbers) #call by reference
print(numbers)

# print(values)