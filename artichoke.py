import math

[p,a,b,c,d,n] = [int(x) for x in input().split(' ')]
max_dif = 0
max_val = p* (math.sin( a+ b) + math.cos(c+d) + 2)
for i in range(2,n+1):
    next = p * (math.sin(a*i+b) + math.cos(c*i+d) + 2)
    if (max_val < next):
        max_val = next
    elif (max_val - next > max_dif):
        max_dif = max_val - next

print(max_dif)