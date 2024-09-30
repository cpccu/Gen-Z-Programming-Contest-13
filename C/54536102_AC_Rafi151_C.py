n = int(input())  # Read the number of problems
count = 0  # Initialize a counter for the problems to implement

for _ in range(n):
    # Read the surety of Petya, Vasya, and Tonya
    a, b, c = map(int, input().strip().split())
    # Check if at least two friends are sure
    if a + b + c >= 2:
        count += 1  # Increment the counter

print(count)  # Output the total count of problems to implement
