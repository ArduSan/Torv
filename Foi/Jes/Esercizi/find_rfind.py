#################find#########
s="ciao come stai"
def find(strg,element):
#@param strg:stringhe
#@param element: elemento che si ricerca nella stringa
#@return int:posizione dell'elemento
    for i in range(0, len(strg)):
        if strg[i]==element:
            return i
################rfind#########
def rfind(strg,element):
#@param strg:stringhe
#@param element: elemento che si ricerca nella stringa
#@return int:posizione dell'elemento
    for i in range(0, len(strg)):
        if strg[len(strg)-1-i]==element:
            return len(strg)-1-i
   
