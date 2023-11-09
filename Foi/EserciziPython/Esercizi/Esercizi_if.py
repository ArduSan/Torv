pict=makePicture(pickAFile())

def reverseBlueRed(pict):
#@param pict: picture
  for x in range(0, getWidth(pict)):
    for y in range(0, getHeight(pict)):
      px=getPixel(pict,x,y)
      BluePict=getBlue(px)
      RedPict=getRed(px)
      if RedPict<BluePict :
        setRed(px,BluePict)
        setBlue(px,RedPict)
        
  show(pict)
  
def minlum(pict):
#@return int 
#@param pict: picture
  maxlum=255
  px=getPixels(pict)
  for i in range(0, len(px)):
      pxR=getRed(px[i])
      pxG=getGreen(px[i])
      pxB=getBlue(px[i])
      lum=(pxR+pxG+pxB)/3
      if lum<maxlum:
        maxlum=lum
  return maxlum

  
        
      