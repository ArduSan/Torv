pic=makeEmptyPicture(500,500)

def diagonale1(pic):
  for x in range (0,getWidth(pic)):
    for y in range (0,1):
      pix=getPixel(pic,x,x)
      setColor(pix,black)
          
def diagonale2(pic):
  for x in range (getWidth(pic),0,-1):
       for y in range(0,1):
        pix=getPixel(pic,x-1,getWidth(pic)-x)
        setColor(pix,red)
      
def diagonalePiccola(pic):
  for x in range (0,getWidth(pic)/2):
      pix=getPixel(pic,x,(getHeight(pic)/2)+x)
      setColor(pix,green)
            
def diagonalePiccola2(pic):
  for x in range (getWidth(pic),getWidth(pic)/2,-1):
      for y in range(0,250):
        pix=getPixel(pic,(getWidth(pic)-y)-1,(getHeight(pic)/2)+y)
        setColor(pix,blue)
        
diagonale1(pic)
diagonale2(pic)
diagonalePiccola(pic)
diagonalePiccola2(pic)
show(pic)

