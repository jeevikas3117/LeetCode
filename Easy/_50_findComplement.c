int findComplement(int num) {
    long long int power = 1;
while (power <= num)
    power <<= 1;
return (power - 1) ^ num;
}