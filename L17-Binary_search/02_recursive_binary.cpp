#include <stdio.h>

int binarySearchRecursive(int arr[], int low, int high, int target) {
    
    if (low > high)
        return -1; 

    int mid = low + (high - low) / 2;

    if (arr[mid] == target)
        return mid;

    else if (arr[mid] < target)
        return binarySearchRecursive(arr, mid + 1, high, target);

    else
        return binarySearchRecursive(arr, low, mid - 1, target);
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 10;

    int result = binarySearchRecursive(arr, 0, n - 1, target);

    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found\n");

    return 0;
}