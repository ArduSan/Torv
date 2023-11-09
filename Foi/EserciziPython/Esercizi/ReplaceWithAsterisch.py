def replace(s):
#@param s: stringa
  nS=""
  for i in range(0, len(s)):
    if not(s[i] in nS) or s[i]==" ":
      nS+=s[i]
    else:
      nS+="*"
  return Ns