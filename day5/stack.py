import sys

def pushElement(stack):
    element = input('Enter element to be pushed')
    stack.insert[0, ]

def popElement(stack):   # Mutator
    if len(stack) == 0:
        print('Stack is empty')
        return
    print(f'Popped element is {stack[0]}')
    del stack[0]

def listStack(stack):
    if len(stack) == 0:
        print('Stack is empty')
        return
    print(f'The stack is {stack}')

def topElement(stack):
    if len(stack) == 0:
        print('Stack is empty')
        return
    print(f'The Top Element of the stack is {stack[0]}')

def exit_program(stack):
    sys.exit('End of Program')

def invalid_choice(stack):
    print('Invalid choice')


def get_menu(choice, stack):            #defined a dictionary
    menu = {
        1 : pushElement,
        2 : popElement,
        3 : listStack,
        4 : topElement,
        5 : exit_program,
    }
    menu.get(choice, invalid_choice)(stack)

def start_app(stack):
    choice = 0
    while True:
        print('1:Push 2:Pop 3:ListStack 4:Top 5:Exit')
        choice = int(input('Enter your choice: '))
        get_menu(choice, stack)

stack = []
start_app(stack)