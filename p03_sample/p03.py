# --------------------------------------------------------------------
#  File p03.py contains functions that process command line arguments 
#  and distinguish strings having balanced brackets.  
# --------------------------------------------------------------------

import os
import sys

from Stack03 import Stack

bracket_map = {
    ")": "(",
    "]": "[",
    "}": "{",
}


def process_string(input_str):
    stack = Stack()
    for char in input_str:
        if char in bracket_map.values():
            stack.push(char)
        elif char in bracket_map:
            if not (stack.is_empty()) and bracket_map[char] == stack.peek():
                stack.pop()
            else:
                return input_str.rstrip() + " is not balanced."
    if stack.is_empty():
        return input_str.rstrip() + " is balanced."
    else:
        return input_str.rstrip() + " is not balanced."


def process_file(input_file, output_file):
    infile = open(input_file, "r")
    outfile = open(output_file, "w")
    line = infile.readline()
    while line != "":
        outfile.write("%s" % (process_string(line.strip()) + "\n"))
        line = infile.readline()
    outfile.close()
    infile.close()


if __name__ == '__main__':
    args = sys.argv[1:]
    input_msg = "Enter the input file name: "
    output_msg = "Enter the output file name: "
    length = len(args)
    if length == 2:
        ifile = args[0]
        ofile = args[1]
    elif length == 1:
        ifile = args[0]
        ofile = input(output_msg)
    elif length == 0:
        ifile = input(input_msg)
        ofile = input(output_msg)
    else:
        print(f"Too many arguments ({length})\nUsage: python3 p03.py <input-filename> <output-filename>")
        sys.exit(1)

    process_file(ifile, ofile)
