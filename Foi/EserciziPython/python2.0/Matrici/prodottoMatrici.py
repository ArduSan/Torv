def prodottoM(mat1,mat2):
#@param mat1: matrix
#@param mat2: matrix
#@return matrix
    matP=[]
    if controllo(mat1,mat2):
      for i in range(0,len(mat1)):
        Ls=[]
        for n in range(0,len(mat2[0])):
          som=0
          for j in range(0,len(mat1[i])):
            prod=mat1[i][j]*mat2[j][n]
            som+=prod
          Ls.append(som)
        matP.append(Ls)
    return matP
    
    
def matrix(numR,numC):
#@param numR:int;number of rows
#@param numC:int;number of coloumns
#@return matrix
    mat=[]
    for i in range(0,numR):
        row=[0]*numC
        mat.append(row)
    for j in range(0,numR):
        mat[j]=input("inserisici "+str(numC)+" valori separati da virgola tra parentesi quadre: ")
    return mat
    
def controllo(mat1,mat2):
#@param mat1:matrix 
#@param mat2:matrix
#return bool
  for i in range(0,len(mat1)):
    if len(mat2)==len(mat1[i]):
      return True
    else: 
      return False
