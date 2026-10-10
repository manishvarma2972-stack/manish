print ("To compute N power N.")
number = int(input("Enter the number: "))
print (number, " power ", number, " is ", sep="", end="")
result = 1
power = 0
while (power < number):
    result = result * number
    power = power + 1
print (result, ".", sep="")

