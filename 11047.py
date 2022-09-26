n,k=map(int,input().split())
a=[]
score=0
for i in range(n):
    a.append(int(input()))

for i in range(n - 1, -1, -1):
    if k == 0:
        break
    if a[i] > k:
        continue
    score += k // a[i]
    k %= a[i]
print(score)

