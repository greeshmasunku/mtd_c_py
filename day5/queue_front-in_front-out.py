import sys                                          # ctrl+h - replace words.

def enQueue(queue):
    element = input('Enter the element to be pushed: ')
    queue.insert(0, element)

def deQueue(queue): # Mutator
    if len(queue) == 0:
        print('Queue is empty')
        return
    print(f'Deleted element is {queue[-1]}')
    queue.pop()

def listQueue(queue): # Accessor
    if len(queue) == 0:
        print('Queue is empty')
        return
    print(f'The Queue is {queue[::-1]}')

def firstElement(queue): # read only function 
    if len(queue) == 0:
        print('Queue is empty')
        return
    print('The first element is', queue[-1])

def lastElement(queue): # read only function 
    if len(queue) == 0:
        print('Queue is empty')
        return
    print('The last element is', queue[0])

def exit_program(queue):
    sys.exit('End of Program')

def invalid_choice(queue):
    print('Invalid choice entered')

def get_menu(choice, queue):
    menu = {
        1 : enQueue,
        2 : deQueue,
        3 : listQueue,
        4 : firstElement,
        5 : lastElement,
        6 : exit_program
    }
    menu.get(choice, invalid_choice)(queue)

def start_app(stack):
    choice = 0
    while True:
        print('1:Insert 2:Delete 3:ListQueue 4:FirstElement 5: LastElement 6:Exit')
        choice = int(input('Enter your choice: '))
        get_menu(choice, queue)

queue = [] # this list is gonna work as Stack
start_app(queue)