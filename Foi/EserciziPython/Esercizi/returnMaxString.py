def maxstr():
  L=["ma tu madre", "no la tua", "bho", "chi lo sa"]
  Gstr=""
  for i in range(0, len(L)):
    for j in range(0, len(L)):
      if (len(L[j])>len(L[i])) and (i!=j):
        Gstr=L[j]
  return Gstr
