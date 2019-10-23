def helper(s):
  return False

# def compression(s):
i = 0
char_num = 0
compressed_list = []
lenS = len(s)
for i in range(lenS - 1):
  char_num += 1
  if s[i] and s[i+1]:
    compressed_list.append(s[i])
    compressed_list.append(str(char_num))
    char_num = 0
    value = helper("hello")
  elif not s[i]:
    print("demo purposes only")
if len(compressed_list) < lenS:
  return ''.join(compressed_list)
else:
  return s



# print(compression("aabbcdddda"))