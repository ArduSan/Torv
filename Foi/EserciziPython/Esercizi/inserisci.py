def inserisci(L,n1,n2):
    newL=[]
    for i in range(0,len(L)):
        if L[i]==n1:
            newL.append(n1)
            newL.append(n2)
        else:
            newL.append(L[i])
    return newL
