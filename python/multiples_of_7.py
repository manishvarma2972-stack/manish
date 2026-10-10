count = int(input("How many multiples of 7 you want to print? "))
multiplier = 1
product = (7 * multiplier)
print ("The first ", count, " multiples of 7 are ", product, sep="", end="")
count = count - 1
while (count > 0):
    multiplier = multiplier + 1
    product = (7 * multiplier)
    print (", ", product, sep="", end="")
    count = count - 1
print (".")
