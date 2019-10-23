# Simple
lst = [1, 2, 3, 4]
tpl = ("cats", "dogs")
dictionary = {"apples": 5, "oranges": 6, "lemons": 0}
string = "for loops are great!"
# Less simple
lstlst = [["Harvard", "Yale"], ["McKinsey", "BCG"]]
tpllst = [("cats", "dogs"), ("sun", "rain"), ("snow", "snowplough")]

# Iterate through each element in the simple data types and print each one!
# for x in lstlst:
#     for y in x:
#         print(y)

# for key in dictionary:
#     print(dictionary[key])

for tpl in tpllst:
    print(tpl)

# Print each string in the lstlst
# Print the second element in each tuple in tpllst