pic=makePicture(pickAFile())

def lastFirstPixColor(pic):
  #@param pic: picture
  firstPix=getPixel(pic,0,0)
  lastPix =getPixel(pic,getWidth(pic)-1,getHeight(pic)-1)
  print "il colore del primo pixel in alto a sinistra e =", firstPix
  print "il colore dell ultimo pixel in basso a destra e =", lastPix
  
lastFirstPixColor(pic)
