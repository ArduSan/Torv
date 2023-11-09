class PoligonoRegolare:
    def __init__(self,Lun_lato,N_lati):
    #@param Lun_lato:int;lunghezza di un lato
    #@param N_lat:numeri di lati del poligono    
        self.Lun_lato=Lun_lato
        self.N_lati=N_lati
    def getLenghtlato(self,Lun_lato):
    #@param Lun_lato:int;lunghezza di un lato
    #@return int 
        return Lun_lato
    def perimetroPol(self,Lun_lato,N_lati):
    #@param Lun_lato:int;lunghezza di un lato
    #@param N_lat:numeri di lati del poligono
    #@return int     
        return Lun_lato*N_lati
class Quadrato(PoligonoRegolare):
    def __init__(self,Lun_lato,N_lati):
    #@parma Lun_lato:int;lunghezza di un lato 
        PoligonoRegolare.__init__(self,Lun_lato,N_lati)
        self.Area=Lun_Lato*Lun_lato
    def getArea(self,Lun_lato):
        return self.Area
