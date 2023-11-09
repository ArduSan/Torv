def croce(A,i,j):
#@param A:matrix
#@param i:int
#@param j:int 
    if i==0: 
        if j==0:
            if A[i][j]>A[i+1][j] and A[i][j]>A[i][j+1]:
                return True
            else:
                return False
        if j==len(A[i]):
            if A[i][j]>A[i+1][j] and A[i][j]>A[i][j-1]:
                return True
            else:
                return False
        if j!=0 and j!=len(A[i]):
            if A[i][j]>A[i+1][j] and A[i][j]>A[i][j+1] and A[i][j]>A[i][j-1]:
                return True
            else:
                return False
    if i!=0 and j==0:
        if A[i][j]>A[i+1][j] and A[i][j]>A[i][j+1] and A[i][j]>A[i-1][j]:
            return True
        else:
            return False
    if j==len(A[i]):
        if A[i][j]>A[i-1][j] and A[i][j]>A[i][j-1] and A[i][j]>A[i+1][j]:
            return True
        else:
            return False
    if i==len(A) :
        if j==len(A[i]):
            if A[i][j]>A[i-1][j] and A[i][j]>A[i][j-1]:
                return True
            else:
                return False
        if j==0:
            if A[i][j]>A[i-1][j] and A[i][j]>A[i][j+1]:
                return True
            else:
                return False
        if j!=0 and j!=len(A[i]):
            if A[i][j]>A[i-1][j] and A[i][j]>A[i][j+1] and A[i][j]>A[i][j-1]:
                return True
            else:
                return False
    if i!=0 and j!=0 and i!=len(A) and j!=len(A[i]):
        if A[i][j]>A[i+1][j] and A[i][j]>A[i][j+1] and A[i][j]>A[i][j-1] and A[i][j]>A[i-1][j]:
            return True
        else:
            return False
def matrix(numR,numC):
#@param numR:int number of rows
#@param numC:int number of columns
    mat=[]
    if numR or numC==0:
        return mat
    else:
        for i in range(0,numR):
            row=[0]*numC
            mat.append(row)
        #for j in range(0,numR):
        #    mat[j]=input("inserire tra due parentesi quadre "+ str(numC) +"valori divisi da una virgola")
        return mat
print(matrix(2,2))


