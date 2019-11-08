


def main():
    print("Hello World!")
    tal = int(input("Enter number, 0 to exit\n"))
    mini = tal
    maxi = tal
    total = int(0)
    number_of_numbers = int(0)
    

    while not tal == 0:
        if tal > maxi:
            maxi = tal
        elif tal < mini:
            mini = tal
        total += tal 
        number_of_numbers += 1   
        tal = int(input("Enter number, 0 to exit\n"))

    total -= mini
    total -= maxi
    number_of_numbers -= 2

    print(f"The mean, excluding the largest and the smallest number is: {total/number_of_numbers}")









if __name__ == "__main__":
    main()