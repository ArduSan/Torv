pic=makePicture(pickAFile())

def CountGreen(pic,c):
#@param pic: picture
#@param c  : int della colonna dove sommo le componenti green
#@return int 
  pxTotGreen=0
  for y in range(0, getHeight(pic)):
    px=getPixel(pic,c,y)
    pxTotGreen+=getGreen(px)
  return pxTotGreen
