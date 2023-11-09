def AlfaNum(s):
#@param s: string 
#@return string 
  newStr=""
  count=0
  for i in range(0, len(s)):
    if s[i].isalpha():
      newStr+="*"
  return newStr