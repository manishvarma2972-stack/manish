count = int(input("Up to which number you want to print odd numbers? "))
counter = 1
print ("The odd numbers up to ", count, " are ", counter, sep="", end="")
counter = counter + 2
while (counter <= count):
    print (", ", counter, sep="", end="")
    counter = counter + 2
print (".")
