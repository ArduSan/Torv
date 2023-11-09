##########PROBLEMA 1

def countDigit(str):
#@param str:string 
#@return int
    if len(str)==0:
        return 0
    if str[0].isdigit():
        return 1+countDigit(str[1:])
    else:
        return countDigit(str[1:])

###########PROBLEMA 2
def DigitList(str):
#@param str:string 
#@return list
    if len(str)==0:
        return []
    if str[0].isdigit():
        return [str[0]]+DigitList(str[1:])
    else:
        return DigitList(str[1:])
        

print(DigitList("c1c2c3c4"))
