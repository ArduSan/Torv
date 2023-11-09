def sumat(mat1,mat2):
#@param mat1,mat2:matrix
#@return matrix 
  if len(mat1)!=len(mat2):
    return "error"
  nMat=[]
  for i in range(0,len(mat1)):
    for j in range(0,len(mat1)):
      nMat.append([mat1[i][j]+mat2[i][j]])
  return nMat

def multi(mat1,mat2):
#@param mat1,mat2: matrix 
#@return matrix
  nMat=[]
  if len(mat1)!=len(mat2[0]):
    return "error"
  
  for i in range(0,len(mat1)):
    f=[]
    for n in range(0,len(mat2[0])):
      mult=0
      for j in range(0,len(mat1[0])):
        mult+=mat1[i][j]*mat2[j][n]
      f.append(mult)
    nMat.append(f)
  return nMat
      
    
