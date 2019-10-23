from cs50 import get_string

s = get_string("Text: ")

for i in range(len(s)):
    print(s[len(s) - i - 1], end="")
print()