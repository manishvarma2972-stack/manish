multiplicant = int(input("Which multiplication table you want to print? "))
multiplier = 1
print ("The multiplication table of ", multiplicant, " is ", sep="")
while (multiplier <= 10):
    multiple = multiplicant * multiplier
    print (multiplicant, " * ", multiplier, " = ", multiple, sep="")
    multiplier = multiplier + 1

