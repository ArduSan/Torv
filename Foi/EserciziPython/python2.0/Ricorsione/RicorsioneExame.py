def ricors(s):
    if len(s)%2==1:
        return ricors(s[:len(s)/2]+s[len(s)/2+1:])
    if len(s)==0:
        return True
    else:
        slef=s[:len(s)/2]
        sright=s[len(s)/2:]
        if slef[0]==sright[0]:
            return ricors(slef[1:]+sright[1:])
        else:
            return False