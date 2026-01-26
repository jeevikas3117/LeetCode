#include <ctype.h>
bool isPalindrome(char* s) {
    char *ptr1=s;
    char *ptr2=s;
    while(*ptr2!='\0'){
        ptr2++;
    }
    ptr2--;
    while(ptr1<ptr2){
        if(isalnum(*ptr1)&&isalnum(*ptr2)){
            if(tolower(*ptr1) != tolower(*ptr2)){
               return false;
            }
            ptr1++;
            ptr2--;
        }
        else{
            if(isalnum(*ptr1)){
                ptr2--;
            }
            else{
                ptr1++;
            }
        }
    }
    return true;
}