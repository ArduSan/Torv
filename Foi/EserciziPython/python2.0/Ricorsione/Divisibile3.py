def divisibile3(n):
    if n<3 or (n<9 and n>6) or (n>3 and n<6):
        return False
    if n==3 or n==9 or n==6:
        return True
    else:
        return divisibile3(sum(map(int,str(n))))




