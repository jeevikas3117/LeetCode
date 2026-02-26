bool wordPattern(char* pattern, char* s) {
    char *map[26] = {0}, *words[1000];
    int wc = 0;
    char *tok = strtok(s, " ");

    while (tok) words[wc++] = tok, tok = strtok(NULL, " ");
    if (wc != strlen(pattern)) return false;

    for (int i = 0; i < wc; i++) {
        int p = pattern[i] - 'a';
        if (!map[p]) {
            for (int j = 0; j < 26; j++)
                if (map[j] && strcmp(map[j], words[i]) == 0) return false;
            map[p] = words[i];
        } else if (strcmp(map[p], words[i]) != 0) return false;
    }
    return true;
}