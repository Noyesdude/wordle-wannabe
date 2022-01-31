# Read a dictionary in and pull out words that are only x long
# First arg is the location of the dictionary and second is the
# location to store new dictionary and third is the length of words

# Note: first sys.argv is file location of current program
import sys

letLen = int(sys.argv[3])

# Get the file and read it in
dicOld = open(sys.argv[1], 'r')
Lines = dicOld.readlines()
print("Opened {} for read".format(sys.argv[1]))

# Open file to write new dictionary
dicNew = open(sys.argv[2], 'w')
print("Opened {} for write".format(sys.argv[2]))

# Read lines and if a word matches length put it in a different file
print("Looking for words {} letters long".format(sys.argv[3]))

for line in Lines:
    if len(line.strip()) == letLen:
        dicNew.writelines(line)

print("Closing files")
dicOld.close()
dicNew.close()
