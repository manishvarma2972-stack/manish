count = int(input("up to which number you want to print N power N series? "))
print ("The N power N series up to ", count, " are 1", sep="", end="")
counter = 2
result = 4
while (result <= count):
    print (", ", result, sep="", end="")
    counter = counter + 1
    result = 1
    power = 0
    while (power < counter):
        power = power + 1
        result = result * counter
print (".")

