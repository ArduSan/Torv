pic=makePicture(pickAFile())

def butterfly(pic):
  for x in range(0,getWidth(pic)/2):
    for y in range(0,getHeight(pic)/2):
      leftPix=getPixel(pic,x,(getHeight(pic)/2)+y)
      rightPix=getPixel(pic,(getWidth(pic)/2)+x,y)
      leftColor=getColor(leftPix)
      rightColor=getColor(rightPix)
      setColor(leftPix,rightColor)
      setColor(rightPix,leftColor)
  
butterfly(pic)
show(pic)
      