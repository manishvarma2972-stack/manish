print ("To compare three numbers.")
num1 = int(input("Enter the first number: "))
num2 = int(input("Enter the second number: "))
num3 = int(input("Enter the third number: "))
maximum = num1
if (num2 > maximum):
    maximum = num2
if (num3 > maximum):
    maximum = num3
print (maximum, " is greatest among ", num1, ", ", num2, " and ", num3, ".", sep="", end="")
