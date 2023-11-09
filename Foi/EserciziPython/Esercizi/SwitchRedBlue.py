pic=makePicture(pickAFile())
#pic=makeEmptyPicture(500,500,red)

def RedSwitchBlue(pic,k):
  #@param pic: picture
  #@param k  : Larghezza immagine dove invertire i colori
  for x in range(0, min(k,getWidth(pic))):
    for y in range(0, getHeight(pic)):
      px=getPixel(pic,x, y)
      ValRed=getRed(px)
      ValBlue=getBlue(px)
      setRed(px,ValBlue)
      setBlue(px,ValRed)
  show(pic)
RedSwitchBlue(pic,250)