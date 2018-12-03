#include<stdio.h>

#define n 5

int main() {
    int arr[n], i, j, min, temp;
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min])
                min = j;
        }
        if (min != i) {
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
    for (i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }
    return 0;
}