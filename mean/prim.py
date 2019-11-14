primes = [2, 3]
number = 5
while len(primes) < 20190:
    isprime =True
    for prime in primes:
        if number % prime == 0:
            isprime = False
            break
    if isprime:
        primes.append(number)
    number += 2
print(primes[-1])
