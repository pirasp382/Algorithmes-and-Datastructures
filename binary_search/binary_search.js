function binary_search(arr, k){
    let l = 0;
    let r = arr.length-1;
    while(l<=r){
        let m = parseInt((l+r)/2);
        if(arr[m] == k) return m;
        else if (k < arr[m]) r = m-1;
        else l = m+1;
    }
    return -1;
}