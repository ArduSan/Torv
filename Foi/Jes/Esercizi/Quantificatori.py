#####################################°Quantificatori 1#######################
pic1=makePicture(pickAFile())
pic2=makePicture(pickAFile())

def lum(p):
#@param p: list of pixel
#@return int: lum = R+G+B
    return getRed(p)+getBlue(p)+getGreen(p)

def equilum(pic1,pic2):
#@param pic1:picture
#@param pic2:picture
#@return bool
    px1=getPixels(pic1)
    for i in range(0, len(px1)):
        if lumpic2(lum(px1[i]))==False:
            return False
     return True


def lumpic2(lumn):
#@param lumn:luminosity of pixels
#@return bool
    px2=getPixels(pic2)
    for j in range(0, len(px2)):
        if lumn==lum(px2[j]):
            return True
    return False
#######################################Quantificatori 2############################
#####variante di quantificatori 1

def controllo1(lumn):
#@param lumn: int lumonisoty of pixels pic1
#@return bool
    px2=getPixels(pic2)
    for j in range (0,len(px2)):
	if lumn!=lum(px2[j]):
            return False
	return True

def equilum2(pic1,pic2):
#@param pic1:picture1
#@param pic2:picture2
   px1=getPixels(pic1)
   for i in range(0, len(px1)):
       if controllo1==False:
           return False
       return True
####################################Quantificatori 3########################
def C(K,y):
#@param K: int
#@return bool
   for x in range(0,getWidth(pic)):
       px=getPixel(pic,x,y)
       Redx+=getRed(px)
       if Redx==K:
           return True
   return False

def quant3(pic,K):
#@param pic:picture
#@return bool
   for y in range(0,getHeight(pic)):
       if C(K,y):
           return True
   return False
