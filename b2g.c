#include <stdio.h>

// Function to convert binary to Gray code
unsigned int binaryToGray(unsigned int binary) {
    // XOR operation to convert binary to Gray
    unsigned int gray = binary ^ (binary >> 1);
    return gray;
}

int main() {
    unsigned int binaryNumber;

    // Input binary number
    printf("Enter a binary number: ");
    scanf("%u", &binaryNumber);

    // Convert binary to Gray code
    unsigned int grayCode = binaryToGray(binaryNumber);

    // Display the result
    printf("Gray code: %u\n", grayCode);

    return 0;
}
