pic=makePicture(pickAFile())

def B(x,s):
#@param x: pixel
#@param s:int 
#@return bool
  return getRed(x)>=s



def control(s):
#param G: sequenza
#return bool
  G=getPixels(pic)
  for i in range(0, len(G)):
    if B(G[i], s)==False:
      return False
  return True