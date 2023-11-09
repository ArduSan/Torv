#Si definisca un classe che ha come attributo una tupla di N interi avente valore iniziale 0,
#con N definito al momento della creazione di un oggetto della classe.
#Inoltre, la classe dispone di un metodo per cisualizzare tutta la tupla, e di un 
#metodo avente(parametri k e i) che modifica l'attributo tupla rimpiazzandolo con una nuova 
#tupla dove il valore k è stato sommato all'elemento in posizione i della vecchia tupla

class Tupla:
    def __init__(self,N):
    #@param N:int
        self.t=(0,)*N
    
    def mostra(self):
        print (self.t)
        
    def modifica(self,k,i):
    #@param k:int
    #@param i:int
        if i>=0 and i<len(self.t):
            self.t=self.t[:i]+(self.t[i]+k,)+self.t[i+1:]
