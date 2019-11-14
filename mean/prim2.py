def isprime(x):
    if x >= 2:
        for y in range(2,x):
            if not ( x % y ):
                return False
    else:
	    return False
    return True

numberofprimes=0
number = 2
while (numberofprimes < 20190):
    if isprime(number):
        numberofprimes += 1
    number += 1
print (number-1)