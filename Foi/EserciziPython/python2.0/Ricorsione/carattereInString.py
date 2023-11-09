#Scrivere una funzione ricorsiva che, data una stringa s, 
#una stringa c di lunghezza 1, e un intero n, 
#restituisce il valore vero se c è presente ALMENO n volte nella stringa s, 
#falso altrimenti. 
  
def Ricors(s,c,n):
#@param s: string 
#@param c: string
#@param n: int 
#@return bool
    if n > s:
        return False
    if n==0:
        return True 
    if c == s[0]:
        return Ricors(s[1:],c,n)
    return Ricors(s[1:],c,n)
