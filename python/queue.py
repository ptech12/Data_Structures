# Queue Library 

class Queue:
    def __init__(self, size):
        self.size = size
        self.front = -1
        self.rear = -1
        self.q = []
    
    def isFull(self):
        if(self.rear >= self.size):
            return True
        else:
            return False
    
    def isEmpty(self):
        if(self.front == self.rear):
            return True
        else:
            return False

    def enque(self, data):
        if(front == -1):
            self.front += 1
            self.rear += 1
            self.q.append(data)
        
        if(self.isFull()):
            print("Queue Overflow")
        else:
            self.rear += 1
            self.q.append(data)
    