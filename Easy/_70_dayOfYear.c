bool isleap(int n){
    if((n%4==0 && n%100!=0) || (n%400==0)){
        return true;
    }
    return false;
}
int dayOfYear(char* date) {
    int year = (date[0]-'0')*1000 + (date[1]-'0')*100 + (date[2]-'0')*10 + (date[3]-'0');
    int month = (date[5]-'0')*10 + (date[6]-'0');
    int d = (date[8]-'0')*10 + (date[9]-'0');
    int i=1;
    int count=0;
    while(i<month){
        if(i==4||i==6||i==9||i==11){
            count+=30;
        }
        else if(i==2){
            if(isleap(year)){
                count+=29;
            }
            else{
                count+=28;
            }
        }
        else{
            count+=31;
        }
        i++;
    }
    count+=d;
    return count;
}