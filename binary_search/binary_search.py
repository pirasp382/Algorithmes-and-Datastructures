def binary_search(arr, k):
    l = 0
    r = len(arr)-1
    while l <=r:
        m = int((l+r)/2)
        if arr[m] == k: return m
        elif k < arr[m]: r = m-1
        else: l = m+1
    return -1
