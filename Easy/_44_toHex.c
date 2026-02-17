char* toHex(int num) {
    if (num == 0) {
        char* res = (char*)malloc(2);
        res[0] = '0';
        res[1] = '\0';
        return res;
    }
    char hex[] = "0123456789abcdef";
    char buffer[9];      // max 8 hex digits + '\0'
    buffer[8] = '\0';
    unsigned int n = num;   // handles negative numbers correctly
    int i = 7;
    while (n > 0) {
        buffer[i--] = hex[n % 16];
        n /= 16;
    }
    char* result = (char*)malloc(9);
    int j = 0;
    for (i = i + 1; buffer[i] != '\0'; i++) {
        result[j++] = buffer[i];
    }
    result[j] = '\0';
    return result;
}