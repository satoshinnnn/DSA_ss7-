//
// Created by Admin on 01/07/2025.
// insertSort
#include <stdio.h>

void insertSort(int arr[], int  n) {
        for (int i = 1; i < n; i++) {
            int temp = arr[i];      //hold phần tử bên phải là temp
            int j = i-1;            // vị trí phần tử bên trái dùng để temp só sánh
            while ( j>=0 && temp < arr[j]) {
                arr[j+1] = arr[j];    // di chuyển phần tử lớn hơn sang phải
                j--;
            }
            arr[j+1] = temp;
        }
}

int main() {
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu: ");
        scanf("%d", &arr[i]);
    }
    insertSort(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}
