def prime(number):

    prime_counter = 2
    square = prime_counter * prime_counter

    while (square <= number):
        if (number % prime_counter == 0):
            break
        prime_counter = prime_counter + 1
        square = prime_counter * prime_counter
    if (square <= number):
        print(number, " is not a prime number.\n", sep="", end = "")
    if (square > number):
        print(number, " is a prime number.\n", sep="", end = "")

prime(2)
prime(93)
prime(1007)



