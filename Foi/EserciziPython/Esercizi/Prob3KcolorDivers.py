

def colorDivers(pic):
#@param pic:picture
#@return int
    px=getPixels(pic)
    count=0
    for i in range (0, len(px)):
        for j in range(0,len(px)):
            colpx=getColor(px[i])
            colpx2=getColor(px[j])
            if colpx!=colpx2:
                count+=1
    return count

def almenoK(pic,k):
#@param pic:picture
#@param k : int
#@return bool
    if colorDivers(pic)>=k:
        return True
    return False

def foo(pic1,pic2,k):
#@param pic1:picture1
#@param pic2:picture2
#@param k: int
#@return bool
    if almenoK(pic1,k) and almenoK(pic2,k):
        return True
    return False
