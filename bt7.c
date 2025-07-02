#include <stdio.h>

void merge(int lArr[], int rArr[], int arr[], int lenArr) {
    int lSize = lenArr / 2;
    int rSize = lenArr - lSize;
    int i = 0, l = 0, r = 0;

    while (l < lSize && r < rSize) {
        if (lArr[l] < rArr[r]) {
            arr[i] = lArr[l];
            i++;
            l++;
        } else {
            arr[i] = rArr[r];
            i++;
            r++;
        }
    }
    while (l < lSize) {
        arr[i] = lArr[l++];
        i++;
    }
    while (r < rSize) {
        arr[i] = rArr[r++];
        i++;
    }
}

void mergeSort(int arr[], int lenArr) {
    if (lenArr <= 1) return;
    int midL = lenArr / 2;
    int lArr[midL];
    int rArr[lenArr - midL];
    int l = 0;
    int r = 0;
    for (l; l < lenArr; l++) {
        if (l < midL) {
            lArr[l] = arr[l];
        } else {
            rArr[r] = arr[l];
            r++;
        }
    }
    mergeSort(lArr, midL);
    mergeSort(rArr, lenArr - midL);
    merge(lArr, rArr, arr, lenArr);
}

int main() {
    int arr[] = {7, 7, 3, 2, 1, 9, 10, 20, 11};
    int len = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, len);

    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
