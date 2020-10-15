a=list(str(input()))  #taking user input as a string and converting into list of characters of that string
even=0
odd=0
for i in range(0,len(a)):
    if i % 2 == 0:
        even = even + int(a[i])  #for even position in the list we add those elements after typecasting each element to int
    else:
        odd = odd + int(a[i])  #for odd position in the list we perform the same process as for the even position list elements
print(abs(even-odd))  
