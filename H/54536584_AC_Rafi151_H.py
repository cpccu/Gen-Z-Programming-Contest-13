
s = input().strip()


numbers = s.split('+')

sorted_numbers = sorted(map(int, numbers))


result = '+'.join(map(str, sorted_numbers))


print(result)
