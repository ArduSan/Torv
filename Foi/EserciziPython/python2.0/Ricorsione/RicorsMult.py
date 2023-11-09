def RicorsMult(L,val,k):
#@param L:List
#@param val: valore
#@param k:
#@return bool
  if len(L)==0:
    return True 
  if len(L)%k==0:
    print 2
    if L[0]==val: 
      return RicorsMult(L[1:],val,k)
    else:
      return False