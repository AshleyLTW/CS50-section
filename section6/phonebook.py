import csv
import sys

# Read from a CSV file and print out the data on each person in the phone book.
# Sample output: Emma's phone number is 617-555-0100

if len(sys.argv) != 2:
    sys.exit("Usage: python phonebook.py data.csv")

