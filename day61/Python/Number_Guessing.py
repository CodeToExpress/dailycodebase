import random

# set our game ending flag to False
game_running = True

while game_running:
        # Greet the user to our game
        print()
        print("I'm thinking of a number between 1 and 100, can you guess it?")

        # have the program pick a random number between 1 and 10
        secret_number = random.randint(1, 100)

        # set the player's guess number to something outside the range
        guess_number = -1

        # loop until the player guesses our number
        while guess_number != secret_number:

                # get the player's guess from the player
                print()
                guess = input("Please enter a number: ")

                # does the user want to quit playing?
                if guess == "quit":
                        game_running = False
                        break

                # otherwise, nope, player wants to keep going
                else:
                        # convert the players guess from a string to an integer
                        guess_number = int(guess)


                # did the player guess the program's number?
                if guess_number == secret_number:
                        print()
                        print("Congratulations, you guessed my number!")

                # otherwise, whoops, nope, go around again
                if guess_number < secret_number:
                        print()
                        print("Your guess is too low.")

                if guess_number > secret_number:
                        print()
                        print("Your guess is too high.")


# say goodbye to the player
print()
print("Thanks for playing!!")
