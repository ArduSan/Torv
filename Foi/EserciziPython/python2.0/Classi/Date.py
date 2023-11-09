class Date:
    def __init__(self):
        self.day=1
        self.month=1
        self.year=0
    def printDate(self):
        print "day: ",self.day, ", month: ", self.month, ", year: ",self.year,
    def setDate(self,d,m,y):
        self.day=d
        self.month=m
        self.year=y
    
