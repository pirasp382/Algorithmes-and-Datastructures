int binary(int *arr, int n, int k){
    int l=0;
    int r = n;
    int m = (int)(l+r)/2;
    while(l<=r){
        if(arr[m]==k) return m;
        else if(k < arr[m]) r =m-1;
        else l = m+1;
    }
    return -1;
}