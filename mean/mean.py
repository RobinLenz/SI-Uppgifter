def main():
    number = int(input("Enter number, 0 to exit\n"))
    mini = number
    maxi = number
    total = int(0)
    number_of_numbers = int(0)
    

    while not number == 0:
        if number > maxi:
            maxi = number
        elif number < mini:
            mini = number
        total += number 
        number_of_numbers += 1   
        number = int(input("Enter number, 0 to exit\n"))

    total -= mini
    total -= maxi
    number_of_numbers -= 2

    print(f"The mean, excluding the largest and the smallest number is: {total/number_of_numbers}")


if __name__ == "__main__":
    main()