#problema 9

pic=makePicture(pickAFile())

def column(pic, c):
    #@param pic: picture
    #@param c  : int
    #@return int
    newGreen=0
    for y in range(0, getHeight(pic)):
        px=getPixel(pic, c ,y)
        newGreen+=getGreen(px)

    return newGreen

#problema 8

def string():
    #@return string
    str="tumamma2voltea90"
    for i in range(0,len(str)):
        if str[i].isalpha():
            str[i]="*"
    return str

#problema 7

def stringPar():
    #@return string
    str="Meartytueiolhuailyaumtaemtmtauziolchcloylta"
    newStr=""
    for i in range(0, len(str),2):
        newStr+=str[i]
    return newStr


