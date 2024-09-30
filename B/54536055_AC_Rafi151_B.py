n = int(input())  # Read the number of words

for _ in range(n):
    word = input().strip()  # Read each word
    if len(word) > 10:
        # Create abbreviation
        abbreviated = f"{word[0]}{len(word) - 2}{word[-1]}"
        print(abbreviated)
    else:
        # Print the word as it is
        print(word)
