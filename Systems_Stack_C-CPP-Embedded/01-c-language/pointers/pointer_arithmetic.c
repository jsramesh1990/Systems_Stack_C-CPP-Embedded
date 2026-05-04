#include <stdio.h>

int main() {
    // Array declaration
    int arr[5] = {10, 20, 30, 40, 50};
    
    // Pointer to first element
    int *ptr = arr;
    
    printf("========================================\n");
    printf("        POINTER ARITHMETIC DEMO         \n");
    printf("========================================\n\n");
    
    // Print array
    printf("Array values: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");
    
    // Basic pointer arithmetic
    printf("--- BASIC OPERATIONS ---\n");
    printf("*ptr = %d\n", *ptr);
    
    ptr++;
    printf("After ptr++: *ptr = %d\n", *ptr);
    
    ptr += 2;
    printf("After ptr+=2: *ptr = %d\n\n", *ptr);
    
    // Pointer difference
    printf("--- POINTER DIFFERENCE ---\n");
    int *start = &arr[0];
    int *end = &arr[4];
    printf("Elements between start and end: %ld\n\n", end - start);
    
    // Traversal using pointer
    printf("--- TRAVERSAL USING POINTER ---\n");
    ptr = arr;
    for(int i = 0; i < 5; i++) {
        printf("arr[%d] = %d at address %p\n", i, *(ptr + i), (ptr + i));
    }
    printf("\n");
    
    // Size demonstration
    printf("--- SIZE INFORMATION ---\n");
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("ptr++ moves %zu bytes\n", sizeof(int));
    
    printf("\n========================================\n");
    printf("             COMPLETE                    \n");
    printf("========================================\n");
    
    return 0;
}
