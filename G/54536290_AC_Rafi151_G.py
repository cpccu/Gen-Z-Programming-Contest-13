
string1 = input().strip()
string2 = input().strip()


normalized_string1 = string1.lower()
normalized_string2 = string2.lower()


if normalized_string1 < normalized_string2:
    print(-1)
elif normalized_string1 > normalized_string2:
    print(1)
else:
    print(0)
