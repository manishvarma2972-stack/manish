count = int(input("How many terms in N power N series you want to print? "))
counter = 1
print ("The first ", count, " terms in N power N series are ", sep="", end="")
while (counter <= count):
    result = 1
    power = 0
    while (power < counter):
        result = result * counter
        power = power + 1
    print (result, end="")
    if (counter < count):
        print(", ", end="")
    counter = counter + 1
print (".")
