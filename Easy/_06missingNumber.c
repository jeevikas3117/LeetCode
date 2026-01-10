int missingNumber(int* nums, int numsSize) {
    int i;
    for(i=0;i<=numsSize;i++){
        int count=0;
        for(int j=0;j<numsSize;j++){
            if(nums[j]==i){
                count++;
            }
        }
        if(count==0){
            return i;
        }
    }
    return i;
}