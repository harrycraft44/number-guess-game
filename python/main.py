import random
randomNumber = random.randrange(0,100)
whilecon = True
guess = ""
attempts = 6

while whilecon:
    print(attempts)
    stringguess = input("guess:")
    if stringguess != "":
        guess = int(stringguess) 
        if guess > randomNumber :
            print("too high")
            attempts = attempts - 1
        elif guess < randomNumber:
            print("too low")
            attempts = attempts - 1
        elif guess == randomNumber:
            print("you did it. found the correct number")
            whilecon = False
        if attempts == 0:
            print("you failed to find the number")
            whilecon = False