def powrec(base, power):
    if power == 1:
        return(base)
    else:
        return(base*powrec(base, power-1))
        
b=int(input())
e=int(input())
print(powrec(b,e))
