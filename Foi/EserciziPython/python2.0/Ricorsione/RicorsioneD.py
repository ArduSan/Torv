def ricorsioneD(List,str):
#@param List:list of strings
#@param str: string 
#@return bool
  if len(List)==0:
    return False
  if str in List[0]:
    return True
  else :
    return ricorsioneD(List[1:],str)
