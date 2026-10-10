count = int(input("How many terms you want to print in square series? "))
square_number = 1
print ("The first ", count, " terms in square series are ", square_number, sep="", end="")
square_number = square_number + 1
square_value = square_number * square_number
while (square_number <= count):
    print (", ", square_value, sep="", end="")
    square_number = square_number + 1
    square_value = square_number * square_number
print(".")

