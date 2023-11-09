########prob6

def controllo(y,k,pic):
#@param k,int
#@param y:int
    for x in range(0,getWidth(pic)):
        px=getPixel(pic,x,y)
        if getRed(px)<k or getBlue(px)<k or getGreen(px)<k :
            return False
    return True

def foo(pic,k):
#@param pic:picture
#@return int
    count=0
    for y in range(0,getHeight(pic)):
        if controllo(k,y,pic):
            count+=1
    return count

