/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int i;
    for(i=digitsSize-1;i>=0;i--){
        if(digits[i]==9){
            digits[i]=0; 
        }
        else{
            digits[i]++;
            break;
        }
    }
    int* result;
    if(i<0){
        result = (int*)malloc((digitsSize + 1) * sizeof(int));
        for(int j=1;j<=digitsSize;j++){
            result[j]=0;
        }
        result[0]=1;
        *returnSize=1+digitsSize;
    }
    else{
        result = (int*)malloc((digitsSize) * sizeof(int));
        for(int j=0;j<digitsSize;j++){
            result[j]=digits[j];
        }
        *returnSize=digitsSize;
    }
    return result;
}