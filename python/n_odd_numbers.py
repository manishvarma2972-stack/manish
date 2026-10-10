count = int(input("How many odd numbers you want to print? "))
counter = 1
print ("The first ", count, " odd numbers are ", counter, sep="", end="")
counter = counter + 2
while (counter < count * 2):
    print (", ", counter, sep="", end="")
    counter = counter + 2
print (".")
