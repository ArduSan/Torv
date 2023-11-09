pic=makeEmptyPicture(500,500)

def rombo(pic):
  #@param pic: picture 
  for x in range(0, getHeight(pic)/2):
    pixH1=getPixel(pic,((getWidth(pic)/2)-x)-1,x)                                                  #diagonale in alto a sinistra che parte in x=250 e finisce in x=0 con y che parte da y=0 e arriva a y= 250
    pixL1=getPixel(pic,(getWidth(pic)-1)-x,(getHeight(pic)/2)-1+x)                                 #diagonale in basso a destra che parte in x=499 e finisce in x=250 con y che parte in y=250 e finisce in y=499
    pixL2=getPixel(pic,(x+getWidth(pic)/2)-(getWidth(pic)/2),(x+(getHeight(pic)/2)-1))             #diagonale in basso a sinistra che parte in x=0 e finisce in x=250 con y che parte in y=250 e finisce in y=499
    pixH2=getPixel(pic,x+((getWidth(pic)/2)-1),(x+((getWidth(pic)/2)-1))-((getHeight(pic)/2)-1))   #diagonale in alto a destra che parte in x=250 e finisce in x=499 con y che parte in y=0 e finisce in y=250
    setColor(pixH1,green)
    setColor(pixL1,green)
    setColor(pixH2,green)
    setColor(pixL2,green)
def quadrato(pic):
  #@param pic: picture 
  for x in range(0, getWidth(pic)/2):
    pixQU=getPixel(pic,(getWidth(pic)/4)+x,getHeight(pic)/4)                                       #lato superiore quadrato che parte in x=125 e finisce in x=375 con y fisso in y=125
    pixQR=getPixel(pic,(getWidth(pic)/4)+(getWidth(pic)/2),(getHeight(pic)/4)+x)                   #lato destro quadrato che ha x fisso in x=375 con y che parte da y=125 e arriva in y=375
    pixQD=getPixel(pic,(getWidth(pic)/4)+x,(getHeight(pic)/2)+(getHeight(pic)/4))                  #lasto inferiore quadrato che parte in x=125 e finisce in x=375 con y fisso in y=375
    pixQL=getPixel(pic,(getWidth(pic)/4),(getHeight(pic)/4)+x)                                     #lato sinistro quadrato che ha x fisso in x=125 con y che parte da y=125 e arriva in y=375
    setColor(pixQU,red)
    setColor(pixQR,red)
    setColor(pixQD,red)
    setColor(pixQL,red)
    
def CircleinQuadinRomb(pic):
  #@param pic:picture
  rombo(pic)
  quadrato(pic)
  addOval(pic,getWidth(pic)/4,getWidth(pic)/4,getWidth(pic)/2,getHeight(pic)/2,blue)
  
CircleinQuadinRomb(pic)
show(pic)
