def linear_search(arr, x)->int:
    for i in range(len(arr)):
        if arr[i] == x: return i
    return -1