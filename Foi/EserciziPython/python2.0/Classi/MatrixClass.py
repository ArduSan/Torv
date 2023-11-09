class matrix:
    def __init__(self,numC,numR):
    #@param numC:int; number of columns   
    #@param numR:int; number of rows
    #@builds a matrix and initializes to 0 all its entries
        self.rows=numR
        self.cols=numC
        self.mat=[]
        for i in range(0,numR):
            row=[0]*numC
            self.mat.append(row)
    def val(self,i,j):
        return self.mat[i][j]
    def modif(self,i,j,v):
    #@param i:int ;number of row where i am changing the value
    #@param j:int ;number of col where i am changini the value
    #@param v:int ; new value that im putting in the matrix
        self.mat[i][j]=v
    def add(self,otherMat):
    #@param otherMat:matrix
        if self.rows!=otherMat.rows or self.cols!=otherMat.cols:
            print "not compatible dimensions"
            return matrix(0,0)
        s=matrix(self.rows,self.cols)
        for i in range(0, numR):
            for j in range(0,numC):
                s.mat[i][j]=self.mat[i][j]+otherMat.mat[i][j]
        return s
    def mult(self,otherMat):
        s=matrix(self.rows,otherMat.cols)
        if self.cols!=otherMat.rows:
            print "not compatible dimensions"
            return matrix(0,0)
        for i in range(0,len(self.mat))
            Ls=[]
            for j in range(0,len(otherMat.mat[0])):
                som=0
                for m in range((0,len(self.mat[i]))):
                    prod=self.mat[i][j]*otherMat.mat[j][n]
                    som+=prod
                Ls.append(som)
            s.mat.append(Ls)
        return s.mat
            
    