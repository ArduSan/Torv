pic=makePicture(pickAFile())

def B(pic):
#@param pic:picture
#@return bool
  px=getPixels(pic)
  count=0
  summR=0
  summGB=0
  for i in range(0, len(px)):
    summR+=getRed(px[i])
    summGB=getGreen(px[i])+getBlue(px[i])
    if summR==summGB:
      count+=1
      summR=0
      summGB=0
  if count==(len(px)-1):
    return True
  return False
  

