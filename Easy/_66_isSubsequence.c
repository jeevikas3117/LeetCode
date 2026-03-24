bool isSubsequence(char* s, char* t) {
    char *p1=t;
    char *p2=s;
    while(*p1!='\0'){
        if(*p1==*p2){
            p2++;
        }
        p1++;
    }
    if(*p2=='\0'){
        return true;
    }
    return false;
}