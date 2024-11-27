#include <stdio.h>
#include <stdlib.h>

int main() {
    int m;
    scanf("%d", &m);
    for (int p = 0; p < m; p++) {
        int ground = 0;
        int r;
        scanf("%d", &r);
        int area[r+1][r+1];

        /* 重置 */
        for (int i = 0; i <= r+1; i++) {
            for (int j = 0; j <= r+1; j++) {
                area[i][j] = 0;
            }
        }

        /* 掃描 */
        for (int i = 1; i <= r; i++) {
            for (int j = 1; j <= r; j++) {
                scanf("%1d", &area[i][j]);
            }
        }

        /* 檢查水格 */
        for (int i = 1; i <= r; i++) {
            for (int j = 1; j <= r; j++) {
                if (area[i][j] == 1) {
                    int count = 0;
                    for (int m = -1; m <= 1; m++) {
                        for (int n = -1; n <= 1; n++) {
                            if (area[i+m][j+n] == 1) {
                                count++;
                            }
                        }
                    }

                    if (count == 9) {
                        ground++;
                    }
                }
            }
        }
        printf("%d\n", ground);
    }
    return 0;
}
























// #include<stdio.h>
// #include<math.h>
// #include<stdlib.h>
// #include<float.h>

// int main(){
//     int k;
//     // printf("輸入一個正整數\n");
//     scanf("%d", &k);

//     for(int s=1 ; s<=k ;s++){        /*[_1]|*/
//         printf("[%2d]|",k);

//         /*____1*/
//         for(int i=0 ; i<k ; i++){
//             printf("%5d",i+1);
//         }
//         /*----+*/
//         printf("\n");
//         printf("----+");

//         /*-----*/
//         for(int i=0 ; i<k ; i++){
//             printf("-----");
//         }
//         printf("\n");

//         /*
//     [ 1]|    1    2    3
//     ----+---------------
//     1|    1    -    -
//     2|    2    4    -
//     3|    3    6    9
//         */

//         for(int i=0 ; i<k ; i++){
//             /*___1|*/
//             printf("%4d|",i+1);
//             for(int j=0 ; j<i+1 ; j++){
//                 printf("%5d",(j+1)*(i+1));
//             }
//             for(int m=0 ; m<(k-i-1) ; m++){
//                 printf("    -");
//             }
            
//             printf("\n");
//         }
//         return 0;
//     }
// }









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


//function  函數
//arguments 引數
//parameter 參數

// #include<stdio.h>
// #include<stdlib.h>
// #include<math.h>



// void birthday(char name[], int age) //須講好資料型態
// {
//     printf("Happy Birthday to you %s.\n",name);
//     printf("You are %d years old.\n", age);

// }

// int main()
// {   
//     char name[] = "Richard";
//     int age = 20;

//     birthday(name, age);

// }
// #include<stdio.h>

// int cnt = 0;

// int fun(int x){
//     cnt ++;
//     if(x < 3) return x;
//     else return fun(x-1) + fun(x-2) + fun(x-3) + 1; 
// }

// int main()
// {   
//     int x;
//     while(scanf("%d", &x) != EOF)
//     {
//         cnt = 0;
//         if (x == 0)
//         {
//             break;
//         }
//         else
//         {
//             int ans = fun(x);
//             printf("f(%d)=%d, # of calls:%d\n", x, ans, cnt);
//         }
//     }
// }








// //switch
// #include<stdio.h>
// #include<stdlib.h>

// int main(){
//     char grade;
//     scanf("%c", &grade);
//     switch (grade)
//     {
//     case 'A':

//         break;
//     case 'B':

//         break;

//     case 'C':

//         break;

//     default:
//         break;
//     }
// }










// #include<stdio.h>
// #include<math.h>
// const float PI = 3.14159;

// int main(){
//     float r, angle;
//     float area(float r , float angle){ 
//         return pow(r, 2) * PI * angle / 360;
//         }

//     float circumference(float r , float angle){
//         if (angle != 360) 
//             return 2 * (PI *r + r)(angle / 360);
//         else 
//             return 2 * (PI *r);
//         }

//     printf("Enter the radius of the sector.");
//     scanf("%f", &r);
//     printf("Enter the angle of the sector.");
//     scanf("%f", &angle);
    
//     printf("The aera of the sector is %f\nThe circumference is %f", area(r, angle) ,circumference(r , angle));

// }
// #include <stdio.h>
// #include <math.h>

// const float PI = 3.14159;

// // 定義計算扇形面積的函數
// float area(float r, float angle) {
//     return pow(r, 2) * PI * angle / 360;
// }

// // 定義計算扇形周長的函數
// float circumference(float r, float angle) {
//     if (angle != 360) 
//         return 2 * PI * r * (angle / 360) + 2 * r;
//     else 
//         return 2 * PI * r;
// }

// int main() {
//     float r, angle;

//     // 提示用戶輸入扇形半徑
//     printf("Enter the radius of the sector: ");
//     scanf("%f", &r);

//     // 提示用戶輸入扇形角度
//     printf("Enter the angle of the sector: ");
//     scanf("%f", &angle);

//     // 輸出扇形面積和周長
//     printf("The area of the sector is %f\nThe circumference is %f\n", area(r, angle), circumference(r, angle));

//     return 0;
// }


// #include<stdio.h>

// int main(){
// int x;
// int number, sum, ISN, ILN;//the_index_of_smallest_number the index of the largest number
// int VSN = 9999999;         //the value of the smallest number
// int VLN = -9999999;        //the value of the largest number
//     while(scanf("%d",&x) == 1) {
//         number++;
        
//         if (x > VLN){
//             VLN = x;
//             ILN++;
//         }
//         else if(x < VSN){
//             VSN = x;
//             ISN++;
//         }  
//         sum += x;      
//     }
//     printf("number:%d\nsum:%d\nthe index of the smallest number:%d\nthe value of the smallest number:%d\nthe index of the largest number:%d\nthe value of the largest number:%d\n",number, sum, ISN, VSN, ILN, VLN);
//     return 0;
// }








// // #include<stdio.h>
// // #include<math.h>

// // int main(){
// //     int a,b;
// //     scanf("%d %d",&a ,&b);
// //     if (b == 0){
// //         printf("sum:%d\nproduct:%d\ndifference:%d\nquotient:invalid\nremainder:invalid\n", a+b, a*b , abs(a-b));
// //         return 1;
// //     }
// //     printf("sum:%d\nproduct:%d\ndifference:%d\nquotient:%d\nremainder:%d\n", a+b, a*b , abs(a-b), a/b, a - (a/b)*b );
// //     return 0;
// // }







// // #include<stdio.h>
// // #include<math.h>

// // int year;
// // int isLeapYear(int year){
// //     return(year % 4);
// // }

// // int main(){
// //     while(scanf("%d", &year) != EOF){
// //         if ((isLeapYear(year) == 0 && year % 100 != 0 ) || year % 400 == 0 ){
// //             printf("1\n");
// //         }
// //         else{
// //             printf("0\n");
// //         }
// //     }    
// // }








// // #include<stdio.h>
// // #include<math.h>

// // double weight, height;
// // double calculateBMI(double height, double weight){
// //     return (weight / (height * height) *10000.0);
// //     }

// // int main(){
// //     while (scanf("%lf %lf", &height, &weight) != EOF){
// //         if (weight <= 0 || height <= 0){
// //             printf("Ivalid");
// //             continue;
// //         }

// //         printf("%lf\n", calculateBMI(height, weight));
// //     }


// // }










// // #include<stdio.h>
// // #include<math.h>

// // int calculate(int tea, int coffee, int bag) {
// //     // 這裡可以加入計算價格的邏輯
// //     return (tea * 50 + coffee * 45 + bag * 1);  // 假設每個物品有相應的價格
// // }

// // int main(){
// //     int tea, coffee, bag, price;
    
// //     while (scanf("%d %d %d", &tea, &coffee, &bag) != EOF) {
// //         if (tea < 0 || coffee < 0 || bag < 0) {  // 修正條件語法
// //             price = -1; // 表示無效輸入
// //             printf(" %d元\n", price);
// //             continue;  // 繼續下一次迴圈，而不是結束程式
// //         }
// //         price = calculate(tea, coffee, bag);  // 計算價格
// //         printf(" %d元\n", price);
// //     }

// //     return 0;  // 正常結束程式
// // }









// // #include<stdio.h>
// // int main()
// // {   
// //     int x;
// //     scanf("%d",&x);
// //     int a = x / 10000;
// //     int b = x / 1000 - a * 10;
// //     int c = x / 100 - a * 100 - b * 10;
// //     int d = x / 10 - a * 1000 - b * 100 - c * 10;
// //     int e = x / 1 - a * 10000 - b * 1000 - c * 100 - d * 10;

// //     printf("a:%d b:%d c:%d d:%d e:%d", a ,b, c ,d ,e);

// //     for (int i = 0; i < a ; i ++){
// //         printf("*");
// //     }
// //     return 0;
// // }





// // #include<stdio.h>

// // int main(){

// //     char name[25];
// //     int age;

// //     printf("\nWhat's your name?\n");
// //     scanf("%s", &name);

// //     printf("How old are you?\n");
// //     scanf("%d", &age);

// //     printf("Hello %s, how are you?\n", name);
// //     printf("You are %d year-old.\n", age);

// //     return 0;
// // }