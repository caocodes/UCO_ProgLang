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

# Python3 code to Check for 
# balanced parentheses in an expression 

import sys
import string
from Stack03 import Stack


# Function to check parentheses 
def check(paranthese_start, paranthese_end): 
	if paranthese_start == "(" and paranthese_end == ")":
		return True
	elif paranthese_start == "[" and paranthese_end == "]":
		return True
	elif paranthese_start == "{" and paranthese_end == "}":
		return True
	else:
		return False

#Function to check for whitespaces
def check_whitespace(str_space):
	for whitespace in str_space:
		if whitespace in string.whitespace:
			return True
	return False

# This function checks each string input with itself using the Stack 
# implementation made in Stack03.py so that each letter that matched with the 
# open and close brackets, paranthese, and curly braces are put in there and 
# then compared with each stach push and pop.
def check_string(instr):
	stack_balance = Stack()
	balance = True
	i = 0

	while i < len(instr) and balance:
		paranthese = instr[i]
		if paranthese in "({[]})":
			if paranthese in "({[":
				stack_balance.push(paranthese)
				#print("pushed ", paranthese)
			elif paranthese in ")}]":
				if stack_balance.is_empty():
					balance = False
				else:
					top = stack_balance.pop()
					#print("popped ", top, paranthese)
					if not check(top, paranthese):
						balance = False
						#print("balance is ", balance)
					else:
						balance = True
						#print("balance is ", balance)
			else:
				if stack_balance.is_empty():
					balance = False
					#print("balance is ", balance)
		i += 1
	if stack_balance.is_empty() and balance:
		return True
	else:
		return False

# Main function to get input and output files and write to the outputfile
# of whether the set of strings for each line in the input file has a 
# balanced set of parantheses, brackets, and curly bracess
try:
	if len(sys.argv) == 1:
		infile = input("Enter input file name:")
		ofile = input("Enter output file name:")
	elif len(sys.argv) == 2:
		infile = sys.argv[1]
		ofile = input("Enter output file name:")
	elif len(sys.argv) == 3:
		infile = sys.argv[1]
		ofile = sys.argv[2]
	else:
		raise Exception('Too many line arguments')

	count = 0
	with open(infile, 'r') as fp:
		saveFile = open(ofile, 'w')
		for count, line in enumerate(fp):
			fline = line.strip()
			if(not fline):
				temp = fline + " Blank line, not a string. \n"
				saveFile.write(temp)
			elif check_whitespace(fline):
				temp = fline + " contains whitespace, not a string. \n"
				saveFile.write(temp)
			elif check_string(fline):
				temp = fline + " is balanced. \n"
				saveFile.write(temp)
			else:
				temp = fline + " is not balanced. \n"
				saveFile.write(temp)
			count += 1
	saveFile.close()

except Exception as e:
	template = "An exception of type {0} occurred."
	message = template.format(type(e).__name__)
	print(message)
	print(str(e))
