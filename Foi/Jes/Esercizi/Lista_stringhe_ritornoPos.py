def Listring(L,s):
#@param L: list of number
#@param s: string 
#@return string 
  newStr=""
  for i in range(0, len(L)):
    if L[i]<len(s):
      newStr+=s[L[i]]
  return newStr