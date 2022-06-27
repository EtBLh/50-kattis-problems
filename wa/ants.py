cases = int(input())

for i in range(0,cases):
    [length, ants] = [int(x) for x in input().split(' ')]
    least = 0
    most = 0
    temps = [int(x) for x in input().split(' ')]
    for temp in temps:
        least = max(least, min(length - temp, temp))
        most = max(most, max(length - temp, temp))
    print(f"{least} {most}") 