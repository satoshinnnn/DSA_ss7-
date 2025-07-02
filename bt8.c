//
// Created by Admin on 01/07/2025.
//
#include <stdio.h>

void sortCol(int row, int col , int arr[row][col], int colToSort) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < row; j++) {
            if (arr[j][colToSort-1] > arr[j+1][colToSort-1]) {
                int temp = arr[j][colToSort -1];
                arr[j][colToSort-1] = arr[j+1][colToSort-1];
                arr[j+1][colToSort-1] = temp;
            }
        }
    }
}

int main() {
    int row;
    int col;
    printf("nhap vao so hang: ");
    scanf("%d", &row);
    printf("nhap vao so cot: ");
    scanf("%d", &col);
    int arr[row][col];

    int colToSort;
    printf("nhap vao cot muon sort: ");
    scanf("%d", &colToSort);

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("Nhap phan tu hang %d cot %d", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Before \n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }

    sortCol(row, col, arr, colToSort);
    printf("After :\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
