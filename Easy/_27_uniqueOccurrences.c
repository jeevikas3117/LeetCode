bool uniqueOccurrences(int* arr, int arrSize) {
    bool seen[arrSize];
    int occ[arrSize];
    int occSize = 0;

    for (int i = 0; i < arrSize; i++)
        seen[i] = false;

    int *ptr1 = arr;

    // Step 1: compute frequencies
    for (int i = 0; i < arrSize; i++) {
        if (seen[i]) {
            ptr1++;
            continue;
        }

        int count = 1;
        int *ptr2 = ptr1 + 1;

        for (int j = i + 1; j < arrSize; j++) {
            if (*ptr1 == *ptr2) {
                count++;
                seen[j] = true;
            }
            ptr2++;
        }

        occ[occSize++] = count;
        ptr1++;
    }

    // Step 2: check uniqueness of frequencies
    for (int i = 0; i < occSize; i++) {
        for (int j = i + 1; j < occSize; j++) {
            if (occ[i] == occ[j])
                return false;
        }
    }

    return true;
}
