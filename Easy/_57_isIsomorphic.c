#include <stdbool.h>

bool isIsomorphic(char* s, char* t) {

    int map1[256] = {0};
    int map2[256] = {0};

    char *p1 = s;
    char *p2 = t;

    while(*p1 != '\0'){

        if(map1[*p1] == 0 && map2[*p2] == 0){
            map1[*p1] = *p2;
            map2[*p2] = *p1;
        }
        else{
            if(map1[*p1] != *p2 || map2[*p2] != *p1){
                return false;
            }
        }

        p1++;
        p2++;
    }

    return true;
}