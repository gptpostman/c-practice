def trappedRain(arr):
    n = len(arr)
    if n<2:
        return 0
    left = [0]*n
    right = [0]*n
    left[0] = arr[0]
    right[n-1] = arr[n-1]
    for i in range(1,n):
        left[i] = max(left[i-1],arr[i])
    # for i in range(n-2,-1,-1):
        right[n-i-1] = max(right[n-i],arr[n-i-1])
    water = 0
    for i in range(n):
        water += min(left[i],right[i]) - arr[i]
    return water

a1=[0,1,0,2,1,0,1,3,2,1,2,1]
print(trappedRain(a1))