pic=makePicture(pickAFile())

def B(x):
#@param x: pixel;
#@return bool 
  return getRed(x)==getGreen(x)+getBlue(x)
  
def controlA(pic):
#@param pic:picture
#@return bool
  #px=getPixels(pic)
  for i in range(0,len(px)):
    if B(px[i]):
      return True
  return False

