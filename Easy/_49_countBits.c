/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 #include <stdlib.h>
int* countBits(int n, int* returnSize) {
    *returnSize = n + 1;
    int* arr = (int*)malloc((n + 1) * sizeof(int));
    for(int i=0;i<=n;i++){
        int count=0;
        int j=i;
        while(j>0){
        if(j%2!=0){
           count++;
        }
        j/=2;
        }
        arr[i]=count;
    }
    return arr;
}