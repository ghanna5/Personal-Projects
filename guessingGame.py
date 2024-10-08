import sys
import random

play_message = input("Would you like to play the guessing game? (Y/N): ")

play_message = play_message.lower()

if play_message != 'y':
    sys.exit()

while True:
    try:
        range_message = int(input("Enter a range: "))
        break;
    except ValueError:
        print("That is not a valid input. You need to enter an integer/number.")

num_chosen = random.randint(0, range_message)
count = 9

while True:
    try:
        guess = int(input(("\nYou will have 10 tries to guess.\nEnter a number from 0 - " + str(range_message) + ": ")))
        break
    except ValueError:
        print("\nThat is not a valid input. You need to enter an integer/number.\n")
        continue

while guess != num_chosen and count != 0:
    if(guess < num_chosen):
        print("\nToo low!")

        if count != 1:
            print("You have " + str(count) + " tries left.")
        else:
            print("You have " + str(count) + " try left.")
    
    elif guess > num_chosen:
        print("\nToo high!")

        if count != 1:
            print("You have " + str(count) + " tries left.")
        else:
            print("You have " + str(count) + " try left.")

    count -= 1

    while True:
        try:    
            guess = int(input("Enter another number: "))
            break
        except ValueError:
            print("\nThat is not a valid input. You need to enter a number.\n")

if guess == num_chosen:
        print("\nCongratulations! You have guessed the correct integer/number!\n")
    
else:
    print("\nGame over! You ran out of tries!\n")
