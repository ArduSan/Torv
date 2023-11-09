from tkinter import N


class PoligonoRegolare:
    def __init__(self,n,I):
    #@param n:int
    #@param l:float
        self.n=n



class Quadrato(PoligonoRegolare):
    def __init__(self,I):
    #@param I:float
        PoligonoRegolare.__init__(self,4,I)
    
    def area(self):
        return self.lungLato**2

########ricopialo dalle slide bene 