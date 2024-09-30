
username = input().strip()


distinct_characters = set(username)


num_distinct = len(distinct_characters)


if num_distinct % 2 == 0:
    print("CHAT WITH HER!")
else:
    print("IGNORE HIM!")
