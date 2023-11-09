def nodoubleRicor(str):
#@param str: string 
  if len(str)==0:
    return ""
  if len(str)==1:
    return str
  if str[0]==str[1]:
    return nodoubleRicor(str[1:])
  return str[0]+nodoubleRicor(str[1:])