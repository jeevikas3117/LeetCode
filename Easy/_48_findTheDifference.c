char findTheDifference(char* s, char* t) {
    char *ptr1=t;
    char needed='\0';
    while(*ptr1 != '\0'){
        int count_s = 0;
        int count_t = 0;
        char *ptr2 = s;
        while (*ptr2 != '\0') {
            if (*ptr2 == *ptr1) {
                count_s++;
            }
            ptr2++;
        }
        char *ptr3 = t;
        while (*ptr3 != '\0') {
            if (*ptr3 == *ptr1) {
                count_t++;
            }
            ptr3++;
        }
        if (count_t > count_s) {
            needed = *ptr1;
            break;
        }
        ptr1++;
    }
    return needed;
}