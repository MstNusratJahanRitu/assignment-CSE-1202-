#ifndef Nusrat_H
#define Nusrat_H

#include <stdio.h>
#include <stdbool.h>

// 1. Find maximum of two numbers
int max(int a, int b) {
    if (a>b) {
        return a;
    } else {
        return b;
    }
}

// 2. Find minimum of two numbers
int min(int a, int b) {
    if (a<b) {
        return a;
    } else {
        return b;
    }
}

// 3. Check whether a number is prime
bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    // Simple loop up to n/2 that students usually write
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

// 4. Check whether a number is odd
bool isOdd(int n) {
    if (n % 2 != 0) {
        return true;
    } else {
        return false;
    }
}

// 5. Check whether a number is even
bool isEven(int n) {
    if (n % 2 == 0) {
        return true;
    } else {
        return false;
    }
}

// 6. Calculate sum of digits
int digitSum(int n) {
    int sum =0;
    while (n > 0) {
        int remainder = n % 10;
        sum = sum + remainder;
        n = n / 10;
    }
    return sum;
}

// 7. Reverse a number
int reverseNumber(int n) {
    int rev =0;
    while (n > 0) {
        int remainder = n % 10;
        rev = (rev * 10) + remainder;
        n = n / 10;
    }
    return rev;
}

// 8. Convert Decimal to Binary
void decToBinary(int n) {
    int binary[32];
    int i= 0;
    if (n == 0) {
        printf("0");
        return;
    }
    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }
    // Print in reverse order
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
}

// 9. Convert Binary to Decimal
int binToDecimal(long long n) {
    int decimal = 0;
    int base = 1; // 2^0 = 1
    while (n > 0) {
        int remainder = n % 10;
        decimal = decimal + (remainder * base);
        n = n / 10;
        base = base * 2; // Increasing power of 2 sequentially
    }
    return decimal;
}

// 10. Convert Decimal to Octal
void decToOctal(int n) {
    printf("%o", n);
}

// 11. Convert Decimal to Hexadecimal
void decToHex(int n) {
    printf("%X", n);
}

// 12. Calculate Factorial
long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}

// 13. Calculate GCD (Greatest Common Divisor)
int gcd(int a, int b) {
    while (b != 0) {
        int temp =b;
        b = a % b;
        a = temp;
    }
    return a;
}

// 14. Calculate LCM (Least Common Multiple)
int lcm(int a, int b) {
    int result = (a*b) / gcd(a, b);
    return result;
}

// 15. Swap two numbers using pointers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// 16. Bubble Sort for an Array
void bubbleSort(int arr[], int size) {
    for (int i = 0; i<size - 1; i++) {
        for (int j = 0; j<size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Using the swap function created above
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

// 17. Selection Sort for an Array
void selectionSort(int arr[], int size) {
    for (int i =0; i < size - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        swap(&arr[min_index], &arr[i]);
    }
}

#endif