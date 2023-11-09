class Stack:
    def __init__(self):
        self.List=[]
    def push(self,elem):
        self.List.append(elem)
    def pop(self):
        if len(self.List)>0:
            self.List.pop(len(self.List)-1)
    def top(self):
        print self.List[len(self.List)-1]
    def empty(self):
        if self.List==[]:
            return True
        else:
            return False
    
class Queue:
    def __init__(self):
        self.List2=[]
    def ini(self,elem):
        self.List2.append(elem)
    def out(self):
        if len(self.List2)>0:
            self.List2.pop(0)
    def first(self):
        print self.List2[0]
    def last(self):
        print self.List2[len(self.List2)-1]
    def empty(self):
        if self.List2==[]:
            return True
        else:
            return False