void reverseString(char* s, int sSize) {
    char *p=s;
    for(int i=1;i<sSize;i++){
        p++;
    }
    char *d=s;
    for(int i=0;i<sSize/2;i++){
        char x=*p;
        *p=*d;
        *d=x;
        p--;
        d++;
    }
}