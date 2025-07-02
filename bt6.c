//
// Created by Admin on 01/07/2025.
// quickSort (chia mangr thành 2 phần , phần bên trái pivot là các phẩn tử có giá trị nhỏ hơn pivot, phân bên phải pivot là các phần tử có giá trị lớn hơnn
//            --> đệ quy đến ki nào mảng được sắp xếp hết)

#include <stdio.h>

int partition(int arr[], int startI, int endI) {
    int pivot = arr[endI];
    int i = startI - 1;

    for (int j = startI; j < endI; j++) {
        if (arr[j] <= pivot) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    i++;
    int temp = arr[i];
    arr[i] = arr[endI];
    arr[endI] = temp;

    return i;
}
void quickSort(int arr[], int startI, int endI) {
    if (endI <= startI) return;
    int pivot = partition(arr, startI, endI);
    quickSort(arr, startI, pivot-1);
    quickSort(arr, pivot+1, endI);
};

int main() {
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu: ");
        scanf("%d", &arr[i]);
    }

    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}
