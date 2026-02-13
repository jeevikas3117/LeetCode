int arraySign(int* nums, int numsSize) {
    int product=1;
    for(int i=0;i<numsSize;i++){
        if(nums[i]<0){
            product*=-1;
        }
        if(nums[i]==0){
            product=0;
        }
    }
    return product;
}