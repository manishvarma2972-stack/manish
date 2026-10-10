count = int(input("How many even numbers you want to print? "))
counter = 0
print ("The first ", count, " even numbers are ", counter, sep="", end="")
counter = counter + 1
product = (counter * 2)
while (counter < count):
    print(", ", product, sep="", end="")
    counter = counter + 1
    product = (counter * 2)
print(".")

