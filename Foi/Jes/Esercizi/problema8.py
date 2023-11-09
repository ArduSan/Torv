
def lum(p):
#@def p: pixel
#return int
    return (getRed(p)+getGreen(p)+getBlue(p))/3.0

def lumMed(y):
#@param y: int
#@return int
    lumM=0
    for x in range(0,getWidth(pic)):
        px=getPixel(pic,x,y)
        lumM+=lum(px)
    return lumM/getWidth(pic)


def riga(pic):
#@def pic:picture
#@return int
    for y in range(0,getHeight(pic)):
        if lumMed(y)!=lumMed(min(y+1,getHeight(pic))):
            return False
    return True

###########################metodo2, più ostico ma con i quant

def verF(lumA,pic):
#@param pic:picture
#@param lumA: int
#@return bool
    lumB=0
    for y in range(0,getHeight(pic)):
        lumR=0
        for x in range(0,getWidth(pic));
            px=getPixel(pic)
            lumR+=lum(px)
        lumB=lumR/getWidth(pic)
        if lumA!=lumB:
            return False
    return True

def foo(pic):
#@param pic: picture
#@return bool
    lumA=0
    for y in range(0, getHeight(pic)):
        lumR=0
        for x in range(0,getWidth(pic));
            px=getPixel(pic)
            lumR+=lum(px)
        lumA=lumR/getWidth(pic)
        if verF(lumA,pic)==False:
            return False
    return True


