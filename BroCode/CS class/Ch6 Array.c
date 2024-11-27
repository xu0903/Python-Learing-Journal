// #include<stdio.h>
// #include<math.h>
// #include<stdlib.h>

// int main(){


// }

//資料排列6.6 p.25
// Selection Sort 使用時機:資料很肥大 因為n筆資料只需換n次
// Bubble Sort(Sinking Sort) 優點:可以少做幾組判斷
// Insertion Sort (插入排序)使用時機:資料10個以下 邊找邊挪資料
// Bucket Sort 很快但有限制(先排小的位數)
// #include qsort(a,elements size, n個);

//資料搜尋6.7 p.41
//線性搜尋vs二元搜尋

//6.9 p.46
// Multiple-Subscripted Arrays多維陣列
#include <stdio.h>
#include <stdlib.h>

// 比較函數，升序排列
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int arr[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
    size_t n = sizeof(arr) / sizeof(arr[0]);

    // 使用 qsort 進行排序
    qsort(arr, n, sizeof(int), compare);

    // 輸出排序後的數組
    for(size_t i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
