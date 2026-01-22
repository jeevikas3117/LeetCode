int reverseBits(int n) {
    int bits[32];
    unsigned int result = 0;
    for (int i = 0; i < 32; i++) {
        bits[i] = n % 2;
        n /= 2;
    }
    for (int i = 0; i < 32; i++) {
        result = result * 2 + bits[i];
    }
    return result;
}