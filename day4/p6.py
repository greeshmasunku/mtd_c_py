my_name = 'greeshma'
print(my_name)
print(my_name.upper())
try:
    print(my_name.index('tt'))
except ValueError:
    print(f'The substring \'tt\' is not found in the {my_name}')      #error handling
print(my_name.capitalize())
print(my_name.find('h'))  # returns -1 if substring is not found
print(my_name.index('h'))  # traces /raises value error | code after this line if there is an error it wont be executed. use try-except to stop it.
