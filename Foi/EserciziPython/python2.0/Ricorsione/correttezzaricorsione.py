def ottopresente(n):
#@param n: int
#@return bool
  ultimacifra=n%10
  if ultimacifra == 8:
    return True 
  elif n<10:
    return False
  else:
    ottopresente(n/10)
    return False 