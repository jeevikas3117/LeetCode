int lengthOfLastWord(char* s) {
    int a=-1;
    int count=0;
    for(int i=0;s[i]!='\0';i++){
        count++;
        if(s[i]==' '&&s[i+1]!='\0'&&s[i+1]!=' '){
            a=i;
        }
    }
    while (count > 0 && s[count - 1] == ' ') {
        count--;
    }
    return count-a-1;
}