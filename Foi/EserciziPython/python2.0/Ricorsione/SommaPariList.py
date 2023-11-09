def ricorsListPari(L):
#@param L:list 
#@return int 
    if len(L)==0:
        return ricorsListPari(L)
    if L[0]%2==0:
        return L[0]+ricorsListPari(L[1:])
    else:
        return ricorsListPari(L[1:])
ricorsListPari([2,4,2,1,3,5,4])