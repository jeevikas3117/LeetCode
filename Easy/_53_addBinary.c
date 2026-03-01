#include <stdlib.h>
#include <string.h>

char* addBinary(char* a, char* b) {
    int len1 = strlen(a) - 1;
    int len2 = strlen(b) - 1;
    int maxLen = (strlen(a) > strlen(b) ? strlen(a) : strlen(b)) + 2;
    char* final = (char*)malloc(maxLen);
    int i = 0;
    int carry = 0;
    while (len1 >= 0 || len2 >= 0) {
        char bit1 = (len1 >= 0) ? a[len1] : '0';
        char bit2 = (len2 >= 0) ? b[len2] : '0';
        if (bit1 == '0' && bit2 == '0') {
            if (carry == 0) {
                final[i] = '0';
            } else {
                final[i] = '1';
                carry = 0;
            }
        }
        else if ((bit1 == '1' && bit2 == '0') ||
                 (bit1 == '0' && bit2 == '1')) {
            if (carry == 0) {
                final[i] = '1';
            } else {
                final[i] = '0';
                carry = 1;
            }
        }
        else {  
            if (carry == 0) {
                final[i] = '0';
                carry = 1;
            } else {
                final[i] = '1';
                carry = 1;
            }
        }
        i++;
        len1--;
        len2--;
    }
    if (carry == 1) {
        final[i++] = '1';
    }
    final[i] = '\0';
    for (int j = 0; j < i / 2; j++) {
        char temp = final[j];
        final[j] = final[i - j - 1];
        final[i - j - 1] = temp;
    }
    return final;
}