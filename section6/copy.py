import sys

# Copy a text file, where the name of the original file and
# the copied file are specified as command-line arguments

if len(sys.argv) != 3:
    sys.exit("Usage: python copy.py infile outfile")

