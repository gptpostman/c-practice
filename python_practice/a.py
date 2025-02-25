n = 3
a = [[1,2,3],[4,5,6],[7,8,9]]
res1 = []
res2 = []
for i in range(n):
    for j in range(n):
        if i==j:
            res1.append(a[i][j])
s1 = sum(res1)

for i in range(n):
    for j in range(n):
        if i+j == n-1:
            res2.append(a[i][j])
s2 = sum(res2)

final = abs(s1 - s2)
print(final)