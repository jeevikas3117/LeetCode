int firstUniqChar(char* s) {
    int freq[26] = {0};
    int i = 0;

    // Count frequency
    while(s[i] != '\0'){
        freq[s[i] - 'a']++;
        i++;
    }

    // Find first unique
    i = 0;
    while(s[i] != '\0'){
        if(freq[s[i] - 'a'] == 1){
            return i;
        }
        i++;
    }

    return -1;
}