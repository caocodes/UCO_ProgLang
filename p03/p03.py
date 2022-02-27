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
	
if __name__ == '__main__':
	try:
		args = sys.argv[1:]
		args_count = len(args)
		in_msg = "Enter the input file name: "
		out_msg = "Enter the output file name: "
		if args_count == 0:
			in_path = input(in_msg)
			out_path = input(out_msg)
		elif args_count == 1:
			in_path = args[0]
			out_path = input(out_msg)
		elif args_count == 2:
			in_path = args[0]
			out_path = args[1]
		else :
			raise ValueError("Arguments count > 2")
		
		with open(in_path, "r") as in_file, open(out_path, "w") as out_file:
			for line in in_file:
				out_file.write(check_str(line.strip()) + "\n")
	
	except Exception as e:
		print("Encountered exception type: {0}".format(type(e).__name__))
		print(traceback.format_exc())
