[num, duration] = [int(x) for x in input().split(' ')]
potions = []
ok = True
for idx in range(0, num):
    potions.append(int(input()))

potions.sort()
for idx in reversed(range(num)):
    potions[idx] -= idx*duration
    if (potions[idx] < 0):
        ok = False
        # break

if (ok):
    print("YES")
else:
    print("NO")

print(potions)