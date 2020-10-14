x=list(str(input()))  
y=list(str(input()))
z=list(m.upper() for m in str(input()))  #directly converting user input to uppercase and storing it in the list

for i in range(0,len(x)):
    if(x[i]=='a' or x[i]=='e' or x[i]=='i' or x[i]=='o' or x[i]=='u' or x[i]=='A' or x[i]=='E' or x[i]=='I' or x[i]=='O' or x[i]=='U'):
        x[i]='%'  #if character is vowel converting it to '%'
for j in range(0,len(y)):
    if(y[j]=='a' or y[j]=='e' or y[j]=='i' or y[j]=='o' or y[j]=='u' or y[j]=='A' or y[j]=='E' or y[j]=='I' or y[j]=='O' or y[j]=='U'):
        pass
    else:
        y[j]='#'  #if character is consonant converting it to '#'

result=(''.join(x+y+z))
print(result)

#if the output pattern is to display each word separately then replace the last two lines of above code with the following snippet
s1=(''.join(x))
s2=(''.join(y))
s3=(''.join(z))
print(s1, s2, s3)  #this prints all the transformed strings separately
