/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* selfDividingNumbers(int left, int right, int* returnSize) {
    int* arr = (int*)malloc((right - left + 1) * sizeof(int));
    int index=0;
    for(int i=left;i<=right;i++){
        int div=i;
        int count=0;
        while(div>0){
            int j=div%10;
            if(j==0||i%j!=0){
                count++;
                break;
            }
            div/=10;
        }
        if(count==0){
            arr[index]=i;
            index++;
        } 
    }
     *returnSize = index;
    return arr;
}