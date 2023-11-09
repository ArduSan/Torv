def multipleC(s,c,a):
#@param s:string 
#@param c:string 
#@param a:string 
#@reutrn string

    if len(s)==0:
        return ""
    if s[0]==c:
        return s[0]+a +multipleC(s[1:],c,a)
    else:
        return multipleC(s[1:])