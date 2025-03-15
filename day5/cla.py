import sys

print(sys.argv) 
# print(len((sys.argv)))
# print(type((sys.argv)))
# print(sys.argv[0])
# print(type((sys.argv[0])))


numbers = [int(x) for x in sys.argv[1:]]
print(numbers)