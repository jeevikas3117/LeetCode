bool isPowerOfTwo(int n) {
    long int x=1;
    if(n==1){return true;}
    while(n>x){
        x*=2;
        if(x==n){
            return true;
        }
    }
    return false;
}