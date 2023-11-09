def media(a, b, c):
  #@ param a: float ( primo numero per fare la media);
  #@ param b: float ( primo numero per fare la media);
  #@ param c: float ( primo numero per fare la media);
  media= (a+b+c)/3.0
  print media
def volumeCono(r, h):
  #@ param r: float ( raggio della base del cono);
  #@ param h: float ( altezza del cono);
  volume= (pi*((r**2)*h))/3.0
  print volume
a=3
b=4
c=5
media(3,4,5)
r=5
h=4
volumeCono(5,4)
