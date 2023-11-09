pic=makePicture(pickAFile())

def lum(px):
#@param px: pixel
#@return int 
   return (getRed(px)+getGreen(px)+getBlue(px))/3.0

def numrighe(pic):
#@param pic:picture
#@return int 
  count=0
  for y in range(0,getHeight(pic)):
    if esisteRiga(pic,y):
      count+=1
  return count

def esisteRiga(pic, y):
#@param pic: picture
#@param y: int
#@return bool 
  for x in range(0 ,getWidth(pic)):
    pix=getPixel(pic,x,y)
    pix1=getPixel(pic,min(x+1,getWidth(pic)-1),y)
    if lum(pix)!=lum(pix1):
      return false
  return True 
    
      


      
  
  

   