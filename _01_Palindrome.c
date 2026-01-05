bool isPalindrome(int x) {
    if(x<0){
        return false;
    }
    long y=0;
    int z=x;
    while(z>0){
        long a=z%10;
        y=(y*10)+a;
        z/=10;
    }
    return x==y;
}