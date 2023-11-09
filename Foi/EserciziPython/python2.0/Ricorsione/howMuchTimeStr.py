def Howmuch(S,c):
#@param S:string 
#@param c:string
#@return int 
    if len(S)==0:
        return 0
    if S[0]==c:
        return 1+Howmuch(S[1:],c)
    else:
        return Howmuch(S[1:])