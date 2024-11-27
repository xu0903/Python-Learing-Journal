#include <stdio.h>
#include <stdlib.h>

int main() {
    /*參數*/
    int n;
    int a[200];
    int times = 0;   //計次

    /*讀取數字個數*/
    scanf("%d", &n);

    /*掃描進入矩陣*/
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    /*泡泡排序*/
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {  // 修正內部迴圈的範圍
            if (a[j] > a[j + 1]) {  // 修正比較的位置
                int x = a[j];
                a[j] = a[j + 1];
                a[j + 1] = x;  // 修正交換的位置
                times++;
            }
        }
    }

    /*印出結果*/
    printf("%d\n", times);
    for (int i = 0; i < n; i++) {
        printf("%d\n", a[i]);
    }

    return 0;
}
