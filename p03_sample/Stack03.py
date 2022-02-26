# --------------------------------------------------------------------
#  File Stack03.py contains the implementation class Stack. 
# --------------------------------------------------------------------
class Stack:

    def __init__(self):
        self._stack = []

    def push(self, element):
        self._stack.append(element)

    def pop(self):
        self._stack.pop()

    def is_empty(self):
        return len(self._stack) <= 0

    def peek(self):
        if not (self.is_empty()):
            return self._stack[len(self._stack) - 1]

    def length(self):
        return len(self._stack)
