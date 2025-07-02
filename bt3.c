#include <stdio.h>

// Hàm sắp xếp mảng arr có n phần tử bằng Insertion Sort
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int temp = arr[i];
        int j = i-1;
        // Dịch các phần tử lớn hơn temp sang phải
        while (j >= 0 && arr[j] > temp) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void addElement(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d la: ", i+1);
        scanf("%d", &arr[i]);
    }
}
int main(void) {
    int n, arr[n];
    printf("Enter the long of array: ");
    scanf("%d", &n);

    addElement(arr, n);

    insertionSort(arr, n);

    printf("Sorted array:\n");
    printArray(arr, n);

    return 0;
}
