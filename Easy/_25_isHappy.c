bool isHappy(int n) {
    int count=0;
    do{
        int sum=0;
        while(n>0){
            int x=n%10;
            sum+=x*x;
            n/=10;
        }
        n=sum;
        count++;
        if(count==100){
            return false;
        }
    }while(n!=1);
    return true;
}