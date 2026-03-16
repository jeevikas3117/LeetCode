#include <string.h>

int longestPalindrome(char* s) {
    int arr[128] = {0};   

    for(int i = 0; s[i] != '\0'; i++){
        arr[s[i]]++;
    }

    int length = 0;
    int oddFound = 0;

    for(int i = 0; i < 128; i++){
        if(arr[i] % 2 == 0){
            length += arr[i];
        }
        else{
            length += arr[i] - 1;
            oddFound = 1;
        }
    }

    if(oddFound)
        length++;

    return length;
}