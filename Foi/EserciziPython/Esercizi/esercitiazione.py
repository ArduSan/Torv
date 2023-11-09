
def problema7(s, list):
    res=""
    for i in range(0,len(list)):
        if (list[i]<len(s)):
            #stringpos=list[i]
            #res+=s[stringpos]
            res+=s[list[i]]
    return res

def problema8(s):
