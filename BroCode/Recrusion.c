// //ex7 1D pool
// #include<stdio.h>
// #include<math.h>
// #include<stdlib.h>
// #include<float.h>

// int main(){
//     int n, padding, pool_size, strike;
//     float a[1000];
//     float larggest;

//     scanf("%d %d %d %d", &n, &padding, &pool_size, &strike);

//     for(int p=0; p<padding ;p++){ // 設padding最小
//         a[p] = -FLT_MAX;
//         a[n+p] = -FLT_MAX;
//     }
    
//     for(int i=0; i<n ;i++){// 掃數字         
//         scanf("%f", &a[i+padding]);
//     }
//     for(int s=0, index=0; s<n+2*padding ;s+=strike, index++){  // strike 跳過格子
//         larggest = -FLT_MAX;                // 重置         
//         for(int k=0; k<pool_size ;k++){      //pool_size
//             if(a[s+k]>larggest){
//                 larggest = a[s+k];
//             }
//         }
//         printf("%d,%f\n",index, larggest);//逐個印出
//     }
    
//     return 0;
// }


#include<stdio.h>
int A(int m, int n) {

    if (m == 0) return n + 1;
    if (m > 0 && n == 0) return A(m - 1, 1);
    return A(m - 1, A(m, n - 1));
}

int main()
{
  printf("%d\n", A(5, 5));
  return 0;
}


// #include<stdio.h>
// #include<math.h>
// #include<stdlib.h>
// int main(){
//     int x;
//     scanf("%d", &x);
//     x+=1;
//     printf("%d", x);
// }

// //費氏數列p.65
// int Fibonacci(int n){

// }

// int main(){
//     int n;
//     scanf("%d", &n);
//     if (n <= 1){
//         printf("%d". n);
//     }

// }

// 產生所有排列 p.54

// 產生組合(m裡面挑n個 C m取n) p.55

// 快速排序法 Quick Sort p.56   
// or #include<stdlib.h> qsort(a, n ,0) 1.一個元素占多少位元組(什麼型態都能排) 2.
// void qsort(void *base, size_t num, size_t size, int (*compar)(const void *, const void *));
// base：指向要排序的數組的指針。
// num：數組中元素的數量。
// size：每個元素的大小，以字節為單位。
// compar：指向比較函數的指針，用於比較數組中的兩個元素。