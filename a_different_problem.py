from sys import stdin

for line in stdin:
    line.replace('\n','')
    num = [int(x) for x in line.split(' ')]
    res = num[0] - num[1]
    if res < 0:
        res = -res;
    print (res)
