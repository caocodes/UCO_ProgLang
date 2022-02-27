#------------------------------------------------------------------
# File p03.py contains functions that process command line
# arguments and distinguish strings having balanced
# brackets.
#------------------------------------------------------------------
# Author 1:	Prantosh Neupane
# Student ID: *20514054
# E-Mail:	pneupane4@uco.edu
# CRN:		21808, Spring 2022
# Author 2:	Cao Truong
# Student ID: *20500231
# E-Mail:	ctruong3@uco.edu
# CRN:		22708, Spring 2022
# Course:	CMSC 5023 – Programming Languages
# Project:	p03
# Due:		March 3, 2022
# Project Account Number: tt035
#----------------------------------------------------------------------

import traceback
import sys
from Stack03 import Stack

brackets = {
	"(": ")",
	"[": "]",
	"{": "}",
}

def check_str(str):
	stack = Stack()
	balance_str = " is balanced."
	unbalance_str = " is not balanced."
	for char in str:
		if char in brackets:
			stack.push(char)
		elif char in brackets.values():
			if not stack.is_empty() and char == brackets[stack.peek()]:
				stack.pop()
			else:
				return str + unbalance_str
	if stack.is_empty():
		return str + balance_str
	else:
		return str + unbalance_str

def process(in_path, out_path):
	in_file = open(in_path, "r")
	out_file = open(out_path, "w")
	while line := in_file.readline():
		out_file.write(check_str(line.strip()) + "\n")
	out_file.close()
	in_file.close()

if __name__ == '__main__':
	try:
		args = sys.argv[1:]
		in_msg = "Enter the input file name: "
		out_msg = "Enter the output file name: "
		match len(args):
			case 0:
				in_path = input(in_msg)
				out_path = input(out_msg)
			case 1:
				in_path = args[0]
				out_path = input(out_msg)
			case 2:
				in_path = args[0]
				out_path = args[1]
			case _:
				raise ValueError("Arguments count > 2")
		process(in_path, out_path)
	except Exception as e:
		print("Encountered exception type: {0}".format(type(e).__name__))
		print(traceback.format_exc())
