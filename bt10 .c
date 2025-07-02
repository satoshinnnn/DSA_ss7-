//
// Created by Admin on 01/07/2025.
//
#include <stdio.h>
#include <math.h>
void sortByDistance(int arr[], int x, int n) {
    for (int i = 0; i < n; i++) {
        for (int j =0; j < n - i -1; j++) {
            if (abs(x-arr[j]) > abs(x-arr[j+1]) || abs(x-arr[j]) == abs(x-arr[j+1]) && arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int arr[] = {10, 9, 3, 5,2};
    int x = 7;
    int n = sizeof(arr) / sizeof(arr[0]);
    sortByDistance(arr, x, n);
}