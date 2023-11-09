def invertiCR(R,x):
#@param R,x:int; number of colums,rows
#@return mat
  mat=matrix(R)
  col=[]
  rig=mat[x]
  for i in range(0,R):
    col+=[mat[i][x]]
  mat[x]=col
  for j in range(0,R):
    mat[j][x]=rig[j]
  return mat
  
def matrix(R):
#@param R:int 
#@return mat
  mat=[]
  for i in range(0,R):
    row=[0]*R
    mat.append(R)
  for j in range(0,R):
    mat[j]=input("inserisci "+str(R)+" valori tra parentesi quadrate: ")
  return mat 
  
    
      
        
    
