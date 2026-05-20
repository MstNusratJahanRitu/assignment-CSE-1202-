#include <stdio.h>
#include "Nusrat.h"

int main() {
    int x,y,num;
    long long binary_input;
    int size;
    int arr1[100], arr2[100];

    printf("--- Input for Max, Min, GCD, LCM, Swap ---\n");
    printf("Enter two numbers are: ");
    scanf("%d %d", &x, &y);
    
    printf("Maximum number: %d\n", max(x, y));
    printf("Minimum number: %d\n", min(x, y));
    printf("GCD value: %d\n", gcd(x, y));
    printf("LCM value: %d\n", lcm(x, y));
    
    swap(&x, &y);
    printf("After swap function -> First: %d, Second: %d\n\n", x, y);

    printf("--- Input for Basic Math Functions ---\n");
    printf("Enter a number is: ");
    scanf("%d", &num);
    
    printf("Is Prime: %d (1=Yes, 0=No)\n", isPrime(num));
    printf("Is Odd: %d\n", isOdd(num));
    printf("Is Even: %d\n", isEven(num));
    printf("Sum of digits: %d\n", digitSum(num));
    printf("Reverse of number: %d\n", reverseNumber(num));
    printf("Factorial: %lld\n\n", factorial(num));

    printf("--- Input for Conversions ---\n");
    printf("Enter decimal number: ");
    scanf("%d", &num);
    printf("Binary format: ");
    decToBinary(num);
    printf("\n");
    printf("Octal format: ");
    decToOctal(num);
    printf("\n");
    printf("Hexadecimal format: ");
    decToHex(num);
    printf("\n\n");

    printf("Enter a binary number: ");
    scanf("%lld", &binary_input);
    printf("Decimal value: %d\n\n", binToDecimal(binary_input));

    printf("--- Input for Sorting Arrays ---\n");
    printf("Enter array size: ");
    scanf("%d", &size);

    printf("Enter %d array elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr1[i]);
        arr2[i] = arr1[i]; // Copying to second array for the other sort
    }

    // Testing Bubble Sort
    bubbleSort(arr1, size);
    printf("\nArray after Bubble Sort: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    // Testing Selection Sort
    selectionSort(arr2, size);
    printf("Array after Selection Sort: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    return 0;
}