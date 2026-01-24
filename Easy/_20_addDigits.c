int addDigits(int num) {
    int sum=0;
    while(num>0){
        int x=num%10;
        sum+=x;
        num/=10;
        if(num<1&&sum>9){
            num=sum;
            sum=0;
        }
    }
    return sum;
}