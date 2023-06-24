#include <stdio.h>

int binary_search(int arr[], int n, int k){
    int l = 0;
    int r = n-1;
    while(l<=r){
        int m = (int)(l+r)/2;
        if(arr[m] == k) return m;
        else if(k < arr[m]) r = m-1;
        else l = m+1;
    }
    return -1;
}