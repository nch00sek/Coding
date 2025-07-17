import random

# Set game range
MIN_NUMBER = 1
MAX_NUMBER = 100

# Generate answer
answer = random.randint(MIN_NUMBER, MAX_NUMBER)
guess_count = 0

print("Welcome to the Ultimate Number Guessing Game!")
print(f"Please guess a number between {MIN_NUMBER} and {MAX_NUMBER}.")

while True:
    try:
        # Get player's input
        guess = int(input("Enter your guess: "))
        guess_count += 1

        # Check if guess is within range
        if guess < MIN_NUMBER or guess > MAX_NUMBER:
            print(f"Please enter a number between {MIN_NUMBER} and {MAX_NUMBER}!")
            continue

        # Determine result
        if guess < answer:
            print("Too low! Guess higher!")
        elif guess > answer:
            print("Too high! Guess lower!")
        else:
            print(f"\nCongratulations! The answer is {answer}")
            print(f"You made {guess_count} guesses in total")
            break

    except ValueError:
        print("Please enter a valid number!")