bool canConstruct(char* ransomNote, char* magazine) {
    int count[26] = {0};

    // Count characters in s
    for (int i = 0; ransomNote[i] != '\0'; i++) {
        count[ransomNote[i] - 'a']++;
    }

    // Subtract characters using t
    for (int i = 0; magazine[i] != '\0'; i++) {
        count[magazine[i] - 'a']--;
    }

    // Check if all counts are zero
    for (int i = 0; i < 26; i++) {
        if (count[i] > 0)
            return false;
    }

    return true;
}