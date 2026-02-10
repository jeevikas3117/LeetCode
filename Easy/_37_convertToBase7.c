char* convertToBase7(int num) {
    if (num == 0) {
        char* zero = (char*)malloc(2);
        strcpy(zero, "0");
        return zero;
    }
    int isNegative = 0;
    if (num < 0) {
        isNegative = 1;
        num = -num;
    }
    char temp[50];
    int index = 0;
    while (num > 0) {
        int rem = num % 7;
        temp[index++] = rem + '0';
        num /= 7;
    }
    if (isNegative) {
        temp[index++] = '-';
    }
    temp[index] = '\0';
    char* result = (char*)malloc(index + 1);
    for (int i = 0; i < index; i++) {
        result[i] = temp[index - i - 1];
    }
    result[index] = '\0';
    return result;
}