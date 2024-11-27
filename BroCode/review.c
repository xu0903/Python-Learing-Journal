#include<stdio.h>
#include<float.h>



int times_10 = 0;
long biggest = -FLT_MAX;
int times = 0;

long long unsigned f(int n)
{   
    times++;
    if (n == 10){
        times_10++;
    }

    long long unsigned r = 0;

    if (n==1) {// base case
        return 1;
    }
    r = f(n-1) + f(n-1) + 1;

    return r;
}
int main()
{
    int a[99999999];
    for(int i = 0 ; i < 999999999 ; i++){
        a[i] = 0;
    }   
    long long unsigned r = f(21);

    printf("%llu\n",r);
    printf("f(n)被呼叫次數: %d\nf(10)被呼叫次數: %d", times, times_10);
    

    return 0;
}










// #include <stdio.h>
// #include <stdlib.h>
// #include <assert.h>
// int data[20] = {1, 5,12,22,23,29,35,42,42,48,50,54,56,66,76,82,86,86,90,91};//
// int times = 0;


// int is_data_sorted(int data[],int n)
// {
//     int i;
//     for(i = 0; i < n-1; ++i) {
//         if (data[i]>data[i+1]) {
//             return 0;
//         }
//     }
//     return 1;
// }

// int sum(int data[],int n)
// {
//     int s = 0,i;
//     for(i = 0; i < n; ++i) {
//         s += data[i];
//     }
//     return s;
// }

// void binary_insertion_sort(int data[],int n)
// {
//     int i, j, pass, t, mid;

// #ifndef NDEBUG
//     int before_sum = sum(data,n);
// #endif    
//     for(i = 1; i < n; ++i) {
//         int low = 0, high = i-1;
//         while(low <= high) {
//             mid = (low+high)/2;
//             if (data[mid]==data[i]) {
//                 break;
//             } else if (data[mid]<data[i]) {
//                 low = mid+1;
//             } else {
//                 high= mid-1;
//             }
//         }
//         if (data[mid]<data[i]) {
//             mid += 1;
//         }
//         t = data[i];
//         for(j=i;j>mid;--j) {
//             data[j]=data[j-1];
//             times++;
//         }
//         data[mid] = t;
//     }

//     assert(is_data_sorted(data,n) && sum(data,n)==before_sum);

//     return;
// }










// #include<stdio.h>
// #include<math.h>
// #include<stdlib.h>

// int main(){
//     int n,x,y;
//     while(scanf("%d %d %d",&n ,&x ,&y) != EOF){
//         int times = 0;
//         for(int i = 0 ; i < n ; i++){
//             times += abs(y%10-x%10);
//             x/=10;
//             y/=10;
//         }
//         printf("%d\n", times);

//     }
// }

// #include<stdio.h>
// #include<stdlib.h>

// unsigned long long _u = 9837266468374616373LLU, _v = 4101842887655102021LLU, _w = 1;
// unsigned long long secret()
// {
//     unsigned long long  x;
//     _u  = _u * 2862933555777941757LLU + 7046029254386353087LLU;
//     _v ^= _v >> 17; _v ^= _v << 31; _v ^= _v >> 8;
//     _w  = 4294957665U * (_w & 0xffffffff) + (_w >> 32);
//     x   = _u ^ (_u << 21); x ^= x >> 35; x ^= x << 4;
//     return (x + _v) ^ _w;
// }

// void set(unsigned long long s) {
//      unsigned long long t = _v;
//     _w = _v;
//     _v = s ^ _v;
//     _u = t;
//     return;
// }

// int main()
// {
//     unsigned i,k;
//     unsigned x;
//     unsigned long long r; // notice that r is unsigned long long
    
//     set(2024);

//     r = secret();
// /* check point #1  */

//     r = secret();
// /* check point #2 */

//     for(i = 0;i<10000;++i) {
// /* check point #3 when i == 2024 */
//         r = secret()+secret();
// /* check point #4 when i == 2024 */
//     }

//     return 0;
// }









// // 檢查簡單數列

// // #include<stdio.h>
// // #include<math.h>
// // #include<stdlib.h>

// // int main()
// // {
// //     int a[100];
// //     int i = 0;
// //     char b;
// //     while(scanf("%d%s",&a[i] ,&b) != EOF)
// //     {
// //         i++;
// //         if (b == '\r' || b == '\n')
// //         {
// //             scanf("\n");
// //         }
// //     }

// // }

// #include <stdio.h>
// #include <stdbool.h>

// // 函數用於檢查數列是否為簡單數列
// bool isValidSequence(int arr[], int n) {
//     if (n <= 1) {
//         return false; // 單個數字或空數列不算有效
//     }

//     bool isIncreasing = true;
//     bool isDecreasing = true;

//     for (int i = 1; i < n; i++) {
//         if (arr[i] > arr[i - 1]) {
//             isDecreasing = false;
//         } else if (arr[i] < arr[i - 1]) {
//             isIncreasing = false;
//         }
//     }

//     return isIncreasing || isDecreasing;
// }

// int main() {
//     char line[1000]; // 用於存儲每行的輸入
//     int arr[100];    // 用於存儲數字序列
//     int n;           // 數字的個數

//     // 逐行讀取輸入直到 EOF
//     while (fgets(line, sizeof(line), stdin)) {
//         n = 0;
//         char *ptr = line;

//         // 逐個讀取數字
//         while (sscanf(ptr, "%d", &arr[n]) == 1) {
//             n++;
//             while (*ptr != ' ' && *ptr != '\0' && *ptr != '\n') {
//                 ptr++;
//             }
//             if (*ptr == ' ') {
//                 ptr++;
//             }
//         }

//         // 檢查數字序列是否有效
//         if (isValidSequence(arr, n)) {
//             printf("valid\n");
//         } else {
//             printf("invalid\n");
//         }
//     }

//     return 0;
// }








// // 產生簡單數列

// // #include<stdio.h>
// // #include<math.h>
// // #include<stdlib.h>

// // int main()
// // {
// //     int m, n;
// //     while ((scanf("%d %d", &m, &n) != EOF))
// //     {   
// //         int q = m;
// //         for(;m > 0; m-=n){
// //             printf("%d ", -m);
// //         }
// //         int p = m+n; //紀錄最後的m值

// //         printf("0");

// //         for(;p <= q; p+=n){
// //             printf(" %d", p);
// //         }
// //         printf("\n");
        
// //     }
// // }