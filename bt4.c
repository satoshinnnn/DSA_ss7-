#include <stdio.h>
#include <string.h>
// Hàm sắp xếp mảng arr có n phần tử bằng Insertion Sort
void insertionSort(char arr[], int n) {
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
int main(void) {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int len = strlen(str);

    insertionSort(str, len);

    printf("Sorted string:\n");
    printf("%s\n", str);
    return 0;
}
