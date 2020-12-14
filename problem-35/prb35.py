A,B,C,D,E,F,G,H = map(int,input().split())
if( (A >= G) or (E >= C)):
    print("0")    #no overlap
else:
    print("1")    #overlap
