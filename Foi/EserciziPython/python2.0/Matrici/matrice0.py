def matrix(numR,numC):
    mat=[]
    for i in range(0,numR):
        row=[0]*numC
        mat.append(row)
    return mat 
print (matrix(3,4))