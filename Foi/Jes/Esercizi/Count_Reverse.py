L=[2,2,1,12,2,235,1]

def countL(L,element):
#@param L: list 
#@param element: elemento da contare
#@return int 
  count=0
  for i in range(0, len(L)):
    if element==L[i]:
      count+=1
  return count 
  
def reverseL(L):
#@param L: list
#@return list
  revL=[]
  for i in range(0, len(L)):
    revL.append(L[(len(L)-1)-i])
  return revL
  

