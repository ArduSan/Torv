pic=makePicture(pickAFile())

def mediaRed(pic,k):
#@param pic:picture
#@param k  :int larghezza immagine nel quale controllare la media del valore Red dei pixel  
  c=0
  for i in range(0,min(k,getWidth(pic))):
    for j in range(0, getHeight(pic)):
      px=getPixel(pic,i,j)
      c+=getRed(px)
    area=min(k,getWidth(pic))*getHeight(pic)
  return c/area  
    
print mediaRed(pic,300)