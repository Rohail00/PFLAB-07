#include <stdio.h>

int main() {
    int n, k, i;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d employee IDs:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter how many positions to rotate right (k): ");
    scanf("%d", &k);

    k = k % n;

    int temp[n];

    for (i = 0; i < n; i++) {
        int new_index = (i + k) % n;
        temp[new_index] = arr[i];
    }

    for (i = 0; i < n; i++) {
        arr[i] = temp[i];
    }

    printf("New shift order:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

