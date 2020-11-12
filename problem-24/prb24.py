l = int(input())
r = int(input())
count = 0

for i in range(l,r+1):
    if(int(i / 10) != i % 10):
        count = count + 1
        
print("\n" + str(count))
