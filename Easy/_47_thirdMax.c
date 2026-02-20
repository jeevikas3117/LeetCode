int thirdMax(int* nums, int numsSize) {
    long long first = LLONG_MIN;
    long long second = LLONG_MIN;
    long long third = LLONG_MIN;
    for (int i = 0; i < numsSize; i++) {
        int n = nums[i];
        if (n == first || n == second || n == third)
            continue;
        if (n > first) {
            third = second;
            second = first;
            first = n;
        } 
        else if (n > second) {
            third = second;
            second = n;
        } 
        else if (n > third) {
            third = n;
        }
    }
    if (third == LLONG_MIN)
        return (int)first;
    return (int)third;
}