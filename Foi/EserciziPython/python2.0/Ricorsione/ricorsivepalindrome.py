def palindrome(str):
#@return str:string
#@return bool 
  mid=len(str)//2
  left=str[:mid]
  right=str[mid:]
  if len(str)<2:
    return True

  if len(str/2)%2==1:
    Dst=left+str[mid+1:]
    return palindrome(Dst)

  if len(str)==2:
    if str[0]==str[1]:
      return True
    else:
      return False

  if str[mid-1]==str[mid]:
    nSt=str[:mid-2]+str[mid+1:]
    return palindrome(nSt)
    
  if str[mid-1]!=str[mid]:
    return False
