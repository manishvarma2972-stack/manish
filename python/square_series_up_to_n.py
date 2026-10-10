count = int(input("Up to which number you want to print square series? "))
square_number = 1
print ("The square series up to ", count, " is ", square_number, sep="", end="")
square_number = square_number + 1
square_value = square_number * square_number
while (square_value <= count):
    print (", ", square_value, sep="", end="")
    square_number = square_number + 1
    square_value = square_number * square_number
print (".")

