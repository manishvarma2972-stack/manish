count = int(input("How many odd numbers you want to print? "))
counter = 1
print ("The first ", count, " odd numbers are ", counter, sep="", end="")
count = count - 1
while (count > 0):
    counter = counter + 2
    print (", ", counter, sep="", end="")
    count = count - 1
print (".")
