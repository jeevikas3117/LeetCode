int mySqrt(int x) {
    if(x==1){
        return 1;
    }
    for(int i=1;i<x;i++){
        long int y=(long)i*i;
        long int z=(long)(i+1)*(i+1);
        if(x>=y&&x<z){
           return (i);
        }
    }
    return x;
}