#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<float.h>

int main(){
    int k;
    // printf("輸入一個正整數\n");
    scanf("%d", &k);

    for(int s=1 ; s<=k ;s++){        /*[_1]|*/
        printf("[%2d]|",s);

        /*____1*/
        for(int i=0 ; i<s ; i++){
            printf("%5d",i+1);
        }
        /*----+*/
        printf("\n");
        printf("----+");

        /*-----*/
        for(int i=0 ; i<s ; i++){
            printf("-----");
        }
        printf("\n");

        /*
    [ 1]|    1    2    3
    ----+---------------
    1|    1    -    -
    2|    2    4    -
    3|    3    6    9
        */

        for(int i=0 ; i<s ; i++){
            /*___1|*/
            printf("%4d|",i+1);
            for(int j=0 ; j<i+1 ; j++){
                printf("%5d",(j+1)*(i+1)*(s));
            }
            for(int m=0 ; m<(s-i-1) ; m++){
                printf("    -");
            }
            
            printf("\n");
        }
        printf("\n");
        
    }
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



// // #include <stdio.h>
// // #include <math.h>

// // // 打印當前的子集
// // void printSubset(int subset[], int size) {
// //     printf("{");
// //     for (int i = 0; i < size; i++) {
// //         if (i > 0) printf(",");
// //         printf("%d", subset[i]);
// //     }
// //     printf("}\n");
// // }

// // // 使用遞歸來生成所有子集
// // void generateSubsets(int n) {
// //     int subset[n];
// //     int index = 0;
    
// //     void generate(int start) {
// //         printSubset(subset, index);
// //         for (int i = start; i <= n; i++) {
// //             subset[index++] = i;
// //             generate(i + 1);
// //             index--;
// //         }
// //     }
    
// //     generate(1);
// // }

// // int main() {
// //     int n;

// //     scanf("%d", &n);

// //     generateSubsets(n);

// //     return 0;
// // }
