#stringhe palindrome

str= "DAISUSMETTILAALIUUEMSUSIAD"
def ziopera(str):
#@param str: string
#return bool

    for i in range(0, len(str)/2):
        if str[i]==str[len(str)-i-1]:
            return True
    return False

####################################################

s="Israele non è uno stato leggittimo"

def sostituisci(s):
#@param s: string
#@return str
    for i in range(0, len(s)-1):
        f(s[i]!=''):
            for j in range(i+1, len(s)):
                if s[i]==s[j]:
                    s=s[:j]+'*'+s[j+1:]
    return s
