def dueMetaUguali(s):
#@param s:str
#@return bool
    if len(s)%2==1:
        s=s[:len(s)//2]+s[len(s)//2+1:]  #il doppio diviso è per far tornare la divisione un intero
    if len(s)==0:
        return True
    else:
        s1=s[:len(s)//2]
        s2=s[len(s)//2:]
        new_s=s1[1:]+s2[1:]
        return s1[0]==s2[0] and dueMetaUguali(new_s)
print (dueMetaUguali("ciaociao"))