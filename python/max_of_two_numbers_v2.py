print ("To compare two numbers.")
num1 = int(input("Enter the first number: "))
num2 = int(input("Enter the second number: "))
message = " is greater than "
if (num1 > num2):
    print (num1, message , num2, ".", sep="", end="")
if (num2 > num1):
    print (num2, message , num1, ".", sep="", end="")
