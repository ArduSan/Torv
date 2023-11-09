pic=makeEmptyPicture(500,500)

def scala(pic,s,alt):
  #@param pic: picture
  #@param s  : int lunghezza scalino
  #@param alt: int altezza partenza scala
  for x in range(0,getWidth(pic),s):
    for y in range(x,x+min((getWidth(pic)-1)-x,s)):
      pixX=getPixel(pic,y,x+max(min((getHeight(pic)-1)-x,alt),0))
      pixY=getPixel(pic,(x+min(getWidth(pic)-x,s))-1,y+max(min(getHeight(pic)-y,alt)-1,0))
      setColor(pixX,black)
      setColor(pixY,green)

scala(pic,25,43)
show(pic)


