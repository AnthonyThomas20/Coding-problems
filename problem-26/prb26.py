n = int(input())
p = int(input())
t = 0
# n = number of pages in the book
# p = required page number
# t = number of pages to be turned to reach pth page
t = (n/2 - p/2)/2
if(t < p/2):
    t = p/2
print("\n" + str(int(t)))
