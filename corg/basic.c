#include <stdio.h>

void printBits(int num) {
    int bits = sizeof(int) * 8;
    for (int i = bits - 1; i >= 0; i--) {
        int bit = (num >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");
}

int main() {
    int num;
    printf("Input number: ");
    scanf("%d", &num);

    // Calculate the number of bits in an integer
    int bits = sizeof(int) * 8;

    // Create a mask with the MSB set
    int mask = 1 << (bits - 1);

    // Print the binary representation of the mask
    printf("Mask binary representation: ");
    printBits(mask);

    // Check if the MSB is set
    int result = num & mask;

    // Print the binary representation of the result of num & mask
    printf("Result of num & mask binary representation: ");
    printBits(result);

    // Check if the MSB is set
    if (result) {
        printf("Most Significant Bit (MSB) of %d is set (1).\n", num);
    } else {
        printf("Most Significant Bit (MSB) of %d is not set (0).\n", num);
    }

    return 0;
}
