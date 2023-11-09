def numero(s):
#@param s=string
#@return int 
    if len(s)==0:
        return 0
    if s[0].isdigit():
        return 1+numero(s[1:])
    else:
        return numero(s[1:])
def carattere(s):
#@param s:string
#@return int 
    if len(s)==0:
        return 0
    if s[0].isalpha():
        return 1+carattere(s[1:])
    else:
        return carattere(s[1:])
def controllo(s):
#@param s:string 
#@return bool
    return numero(s)==carattere(s)