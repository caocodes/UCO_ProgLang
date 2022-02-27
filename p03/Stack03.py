#------------------------------------------------------------------
# File Stack03.py contains the implementation class Stack.
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
class Stack():
	def __init__(self):
		self.items = []

	def push(self, item):
		self.items.append(item)

	def pop(self):
		return self.items.pop()
	
	def peek(self):
		if not self.is_empty():
			return self.items[-1]

	def is_empty(self):
		return self.items == []

	def size(self):
		return len(self.items)
	
	def print(self):
		print(*self.items, sep = ", ") 





