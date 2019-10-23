import csv
# import sys
from sys import argv, exit

if len(argv) != 2:
    exit("Usage: python phonebook.py data.csv")

f = open(sys.argv[1])
reader = csv.DictReader(f)

fields = reader.fieldnames
if "name" not in fields or "number" not in fields:
    exit("missing value")

for row in reader:
    name = row("name")
    number = row("number")
    print(f"{name}'s phone number is {number}")

f.close()

# with open(sys.argv[1]) as f:
#     Code goes here!

# Done with the file

