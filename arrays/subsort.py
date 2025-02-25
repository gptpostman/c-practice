def subsort(a):
    n = len(a)
    b = a.copy()
    a.sort()
    i=0
    j=n-1
    while i<n and a[i] == b[i]:
        i += 1
    while j>=0 and a[j] == b[j]:
        j -= 1
    if i == n:
        return [-1,-1]
    return [i,j]

a1 = [1,2,3,4,8,7,6,5,9,10,11,12]
print(subsort(a1))