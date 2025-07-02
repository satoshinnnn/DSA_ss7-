#include <stdio.h>

void sort(int arr[], int n) {
    int countEven = 0, countOdd = 0;
    // Đếm chẵn/lẻ
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            countEven++;
        else
            countOdd++;
    }

    int evenArr[countEven], oddArr[countOdd];
    int evenI = 0, oddI = 0;

    // Tách vào hai mảng evenArr, oddArr
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evenArr[evenI++] = arr[i];
        } else {
            oddArr[oddI++] = arr[i];
        }
    }

    // Sắp xếp tăng dần evenArr
    for (int i = 0; i < countEven - 1; i++) {
        for (int j = 0; j < countEven - i - 1; j++) {
            if (evenArr[j] > evenArr[j + 1]) {
                int tmp = evenArr[j];
                evenArr[j] = evenArr[j + 1];
                evenArr[j + 1] = tmp;
            }
        }
    }

    // Sắp xếp giảm dần oddArr
    for (int i = 0; i < countOdd - 1; i++) {
        for (int j = 0; j < countOdd - i - 1; j++) {
            if (oddArr[j] < oddArr[j + 1]) {
                int tmp = oddArr[j];
                oddArr[j] = oddArr[j + 1];
                oddArr[j + 1] = tmp;
            }
        }
    }

    // Ghép lại vào arr: chẵn trước, lẻ sau
    int k = 0;
    for (int i = 0; i < countEven; i++) {
        arr[k] = evenArr[i];
        k++;
    }
    for (int i = 0; i < countOdd; i++) {
        arr[k] = oddArr[i];   // <-- chỗ đã sửa
        k++;
    }
}

int main() {
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu %d: ", i);
        scanf("%d", &arr[i]);
    }

    sort(arr, n);

    printf("Ket qua sap xep: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
