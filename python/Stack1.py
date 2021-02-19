class Stack:
	def __init__(self):
		self.items = []
	
	def push(self, x):
		self.items.append(x)
	
	def pop(self):
		self.items.pop()
	
	def isEmpty(self):
		return self.items == []
	
	def peek(self):
		if not self.isEmpty():
			return self.items[-1]
	
	def getStack(self):
		return self.items