#include <stdio.h>

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; 
        }
    }
    return -1;
}

int main() {
    int arr[10];
    int target;


    printf("Enter 10 elements for the array:\n");
    for (int i = 0; i < 10; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &target);

    int result = linearSearch(arr, 10, target);

    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found in the array\n");
    }

    return 0;
}
