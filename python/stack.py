# #Implementation of Stack object





    	


# class Stack():
# 	#Constructor
# 	def __init__(self, lim = 10):
# 		self.limit = lim
# 		self.stk = []
# 	#Returns True is stack
# 	def is_empty(self):
# 		if len(self.stk) == 0:
# 			return None
# 		else:
# 			return self.stk
# 	#Adds Item to stack
# 	def push(self, item):
# 		if len(self.stk) >= self.limit:
# 			print("Stack overflow")
# 		else:
# 			self.stk.append(item)
# 		# print(f"Adding {item} to Stack")
# 		# print(f"Stack after push {self.stk}")
# 	#Removes last item of stack	
# 	def pop(self):
# 		if len(self.stk) <= 0:
# 			print("Stack underflow")
# 		else:
# 			x = self.stk.pop()
# 		# print(str(x) + " is removed")
# 		# print(f"Stack after pop {self.stk}")
# 	#Returns last item of Stack	
# 	def peek(self):
# 		if len(self.stk) <= 0:
# 			print("Stack underflow")
# 		else:
# 			return self.stk[-1]
# 	#Returns the size of stack		
# 	def size(self):
# 		return len(self.stk)
# 	#Returns What is inside stack
# 	def stack_(self):
# 		print(self.stk)

# # def adder():
# # 	while True:
# # 		item = input()
# # 		if item == '\x05':
# # 			break
# # 		else:
# # 			user.push(item)
	


# # print("Welcome to Stack")
# # size_n = int(input("Enter the size of your stack >"))
# # user = Stack(size_n)
# # print("What would you like to do")
# # while True:
# # 	print("\n0.Exit\n1.Add Item to list\n2.Remove last of list\n3.Want to know top item in Stack\n4.Want to know Stack items\n5.Want to size of Stack\n6.Want to know Stack is Empty")
# # 	choice = int(input('> '))
# # 	if choice == 1:
# # 		print("Enter Ctrl + E to exit from adding items")
# # 		adder()
# # 	elif choice == 2:
# # 		print("Warning! Last item in your Stack will be removed")
# # 		option = input("Yes or No")
# # 		if option == 'y' or option == 'yes' or option == 'Yes' or 'YES':
# # 			user.pop()
# # 		elif option == 'n' or option == 'no' or option == 'No' or 'NO':
# # 			continue
# # 		else:
# # 			print("Please Enter a valid option First") 
# # 	elif choice == 3:
# # 		print(f"Top Value of Stack is {user.peek()}")
# # 	elif choice == 4:
# # 		print(f"Your Stack is {user.stack_()}")
# # 	elif choice == 5:
# # 		print(f"The size of Stack is {user.size()}")
# # 	elif choice == 6:
# # 		if user.is_empty() == None:
# # 			print("Yes. Your is Empty")
# # 		else:
# # 			print(f"Nope. Your Stack is {user.stack_()}")

