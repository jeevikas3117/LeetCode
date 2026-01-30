bool isPowerOfFour(int n) {
    long int x=1;
    while(x<=n){
        if(x==n){
            return true;
        }
        x*=4;
    }
    return false;
}