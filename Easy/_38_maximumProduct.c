int maximumProduct(int* nums, int numsSize) {
    int max1 = -1001, max2 = -1001, max3 = -1001;
    int min1 = 1001, min2 = 1001;
    for (int i = 0; i < numsSize; i++) {
        int x = nums[i];
        if (x > max1) {
            max3 = max2;
            max2 = max1;
            max1 = x;
        } else if (x > max2) {
            max3 = max2;
            max2 = x;
        } else if (x > max3) {
            max3 = x;
        }
        if (x < min1) {
            min2 = min1;
            min1 = x;
        } else if (x < min2) {
            min2 = x;
        }
    }
    int p1 = max1 * max2 * max3;
    int p2 = min1 * min2 * max1;
    return p1 > p2 ? p1 : p2;
}
