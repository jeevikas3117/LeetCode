// The API isBadVersion is defined for you.
bool isBadVersion(int version);

int firstBadVersion(int n) {
   long left = 1;
    long right = n;

    while(left < right){
        long mid = left + (right - left) / 2;

        if(isBadVersion(mid)){
            right = mid; 
        } else {
            left = mid + 1;
        }
    }

    return left;
}