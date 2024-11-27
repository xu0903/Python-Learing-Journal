/*五子棋*/
#include<stdio.h>
#include<stdlib.h>

int main(){
    int row,column;
    int a[26][26];      //上下左右各推出4格 真實棋盤落在4-22 (避免掃出邊界)
    int turns = 0;      //%2 =1 黑棋 =0 白棋

    /*清空棋盤*/
    for(int i=0 ; i<26 ;i++){
        for(int j=0 ; j<26 ;j++){
            a[i][j] = -1;
        }
    }
    /*下棋 檢查上下左右 斜邊*/
    
    while (scanf("%d,%d", &row, &column)!=EOF){   
        int countx = 0;
        int county = 0;
        /*輪到誰*/
        turns++;        
        /*黑棋*/
        if(turns%2 == 1){
            a[row+4][column+4] = 1;
            for(int m=0 ; m<26 ;m++){
                if(a[row+4][m] == 1 || a[row+4][m] == 0){
                    countx++;
                }
            }
            for(int m=0 ; m<26 ;m++){
                if(a[m][column+4] == 1 || a[row+4][m] == 0){
                    county++;
                }
            }
            printf("%d:%d %d:%d\n",row,countx,column,county);

            int line = 0;   //判斷連線與否
            line = 0;
            /*斜線 \*/
            for(int p=0 ; p<5 ; p++){
                if (a[row+4+p][column+4+p] == 1){
                    line++;
                    if(line == 5){
                        printf("black1\n");
                        return 0;
                    }  
                }
            }
            if (a[row+4-1][column+4-1] == 1){
                for(int q=1 ; q<=5 ; q++){
                    if (a[row+4-q][column+4-q] == 1){
                        line++;
                    }
                    if(line == 5){
                        printf("black2\n");
                        return 0;
                    }
                }
            }
                else{continue;}
            /*斜線 /*/
            line = 0;
            for(int p=0 ; p<5 ; p++){
                if (a[row+4+p][column+4-p] == 1){
                    line++;
                    if(line == 5){
                        printf("black3\n");
                        return 0;
                    }  
                }
            }
            if (a[row+4-1][column+4+1] == 1){
                for(int q=1 ; q<=5 ; q++){
                    if (a[row+4-q][column+4+q] == 1){
                        line++;
                    }
                    if(line == 5){
                        printf("black4\n");
                        return 0;
                    }
                }
            }
                else{continue;}        
            /*水平線*/
            line = 0;
            for(int p=0 ; p<5 ; p++){
                if (a[row+4+0][column+4+p] == 1){
                    line++;
                    if(line == 5){
                        printf("black5\n");
                        return 0;
                    }  
                }
            }
            if (a[row+4-1][column+4-1] == 1){
                for(int q=1 ; q<=5 ; q++){
                    if (a[row+4-0][column+4-q] == 1){
                        line++;
                    }
                    if(line == 5){
                        printf("black6\n");
                        return 0;
                    }
                }
            }
            else{continue;}
            /*垂直線*/
            line = 0;
            for(int p=0 ; p<5 ; p++){
                if (a[row+4+p][column+4+0] == 1){
                    line++;
                    if(line == 5){
                        printf("black7\n");
                        return 0;
                    } 
                }
            }
            if (a[row+4-1][column+4-1] == 1){
                for(int q=1 ; q<=5 ; q++){
                    if (a[row+4-q][column+4-0] == 1){
                        line++;
                    }
                    if(line == 5){
                        printf("black8\n");
                        return 0;
                    }
                }
            }
                else{continue;}
                
                
            
        }
        /*白棋*/
        else if(turns%2 == 0){
            a[row+4][column+4] = 0;
            for(int m=0 ; m<26 ;m++){
                if(a[row+4][m] == 1 || a[row+4][m] == 0){
                    countx++;
                }
            }
            for(int m=0 ; m<26 ;m++){
                if(a[m][column+4] == 1 || a[row+4][m] == 0){
                    county++;
                }
            }
            printf("%d:%d %d:%d\n",row,countx,column,county);

            int line = 0;   //判斷連線與否
            /*斜線 \*/
            line = 0;
            for(int p=0 ; p<5 ; p++){
                if (a[row+4+p][column+4+p] == 0){
                    line++;
                    if(line == 5){
                        printf("white\n");
                        return 0;
                    } 
                }
            }
            if (a[row+4-1][column+4-1] == 0){
                for(int q=1 ; q<=5 ; q++){
                    if (a[row+4-q][column+4-q] == 0){
                        line++;
                    }
                    if(line == 5){
                        printf("white\n");
                        return 0;
                    }
                }
            }
                else{continue;}
            /*斜線 /*/
            line = 0;
            for(int p=0 ; p<5 ; p++){
                if (a[row+4+p][column+4-p] == 0){
                    line++;
                    if(line == 5){
                        printf("white\n");
                        return 0;
                    } 
                }
            }
            if (a[row+4-1][column+4+1] == 0){
                for(int q=1 ; q<=5 ; q++){
                    if (a[row+4-q][column+4+q] == 0){
                        line++;
                    }
                    if(line == 5){
                        printf("white\n");
                        return 0;
                    }
                }
            }
            else{continue;}        
            /*水平線*/
            line = 0;
            for(int p=0 ; p<5 ; p++){
                if (a[row+4+0][column+4+p] == 0){
                    line++;
                    if(line == 5){
                        printf("white\n");
                        return 0;
                    } 
                }
            }
            if (a[row+4-0][column+4-1] == 0){
                for(int q=1 ; q<=5 ; q++){
                    if (a[row+4-0][column+4-q] == 0){
                        line++;
                    }
                    if(line == 5){
                        printf("white\n");
                        return 0;
                    }
                }
            }
            else{continue;}
            /*垂直線*/
            line = 0;
            for(int p=0 ; p<5 ; p++){
                if (a[row+4+p][column+4+0] == 0){
                    line++;
                    if(line == 5){
                        printf("white\n");
                        return 0;
                    }
                }
            }
            if (a[row+4-1][column+4-0] == 0){
                for(int q=1 ; q<=5 ; q++){
                    if (a[row+4-q][column+4-0] == 0){
                        line++;
                    }
                    if(line == 5){
                        printf("white\n");
                        return 0;
                    }
                }
            }
            else{continue;}
        }  
    }   
}










// #include<stdio.h>
// #include<stdlib.h>

// int main(){
//     int n; //測資筆數
//     scanf("%d", &n);
//     for(int i=0 ; i<n ; i++){
//         /*row column數*/
//         int k; 
//         scanf("%d", &k);
//         /*10x10 陣列歸0*/
//         int a[10][10];
//         for(int q=0 ; q<10 ; q++){
//             for(int p=0 ; p<10 ; p++){
//                 a[q][p] = 0;
//             }
//         }
//         /*掃入數字*/
//         for(int q=0 ; q<k ; q++){
//             for(int p=0 ; p<k ; p++){
//                 scanf("%d",&a[p][q]);
//             }
//         }
//         /*印出數字*/
//         for(int p=0 ; p<k ; p++){
//             for(int q=0 ; q<k ; q++){
//                 printf("%.2f",(float)a[p][q]); //強制改float
//                 if (q != k-1)
//                 {
//                     printf(",");
//                 }
                
//             }
//             printf("\n");
//         }



//     }
//     return 0;
// }










// // /*Bonus Question*/ 

// // #include<stdio.h>
// // #include<math.h>
// // #include<stdlib.h>
// // /*
// // 9,8,7
// // 8,7,9
// // */

// // /*
// // 1,2,0
// // */
// // int main(){
// //     int a[1000];
// //     int b[1000];
// //     int d[1000];
// //     int k=0;
// //     char c;

// //     for(int i=0 ; i<1000 ; i++){
// //         d[i] = -9999;
// //     }
// //     int times = 0;

// //     /*分別掃入兩個陣列*/
// //     int p=0;
// //     while (scanf("%d%c", &a[p], &c) == 2){ 
// //             p++;
// //             times++; 
// //             if (c != ',') { break;}
            
// //         }
// //     // while(scanf("%d", &a[k])== 1){    
// //     //     k++;
// //     //     times++;
// //     // }

// //     /*除錯*/
// //     // for(int i=0 ; i<3 ; i++){
// //     //     printf("%d",a[i]);
// //     // }


// //     p=0;
// //     while (scanf("%d%c", &b[p], &c) == 2){ 
// //             p++; 
// //             if (c != ',') { break;}
// //         }
// //     /*除錯*/
// //     // for(int i=0 ; i<3 ; i++){

// //     //     printf("%d",b[i]);
// //     // }



// //     // for(int i=0 ; i<times ; i++){
// //     //     if (scanf("%d%c", &b[i], &c)== 1 && c != "\n"){
// //     //         continue;
// //     //     }
// //     //     else{break;}
// //     // }

// //     /*拉兩個陣列做比較*/
// //     for(int i=0 ; i<times ; i++){
// //         for(int j=0 ; j<times ; j++){
// //             if(a[i] == b[j] && d[j]==-9999){
// //                 d[j] = i;
// //                 break;
// //             }
// //             else{continue;}
// //         }
// //     }

// //     for(int i=0 ; i<times ;i++){
// //         printf("%d",d[i]);
// //         if (i!=times-1)
// //         {
// //             printf(",");
// //         }
        
// //     }
// //     printf("\n");

// //     for(int i=0 ; i<1000 ; i++){
// //         d[i] = -9999;
// //     }
    
// //     for(int i=0 ; i<times ; i++){
// //         for(int j=times ; j>=0 ; j--){
// //             if(a[i] == b[j] && d[j]==-9999){
// //                 d[j] = i;
// //                 break;
// //             }
// //             else{continue;}
// //         }
// //     }

// //     for(int i=0 ; i<times ;i++){
// //         printf("%d",d[i]);
// //         if (i!=times-1)
// //         {
// //             printf(",");
// //         }
        
// //     }


// // }









// // /*
// // diamond:1
// // *
// // diamond:3
// // -*-
// // *-*
// // -*-
// // diamond:5
// // --*--
// // -*-*-
// // *---*
// // -*-*-
// // --*--
// // diamond:7
// // ---*---
// // --*-*--
// // -*---*-
// // *-----*
// // -*---*-
// // --*-*--
// // ---*---
// // */
// // #include<stdio.h>
// // #include<stdlib.h>
// // void top_and_buttom(int n){
// //     for(int i=0; i<(n-1)/2 ;i++){
// //         printf("-");
// //     }
// //     printf("*");
// //     for(int i=0; i<(n-1)/2 ;i++){
// //         printf("-");
// //     }
// //     printf("\n");
// // }

// // void middle(int n){
// //     // printf("*");
// //     // for(int i=0 ;i<n-2; i++){
// //     //     printf("-");
// //     // }
// //     // printf("*");

// //     // printf("\n");

// //     for(int j=0 ; j<n/2 ; j++){
// //         for(int i=0 ; i<n ; i++){
// //             if(i == (n-1)/2-1-j || i == (n+1)/2+j){
// //                 printf("*");
// //                 continue;
// //             }
// //             printf("-");
// //         }
// //         printf("\n");
// //     }

// //     for(int j=n/2 ; j>0 ; j--){
// //         for(int i=n ; i>0 ; i--){
// //             if(i == (n-3)/2+1+j || i == (n+3)/2-j){
// //                 printf("*");
// //                 continue;
// //             }
// //             printf("-");
// //         }
// //         printf("\n");
// //     }
// // }


// // int main(){
// //     int n; 
// //     while(scanf("%d", &n)!=EOF){
// //         printf("diamond:%d\n",n);
// //         if(n==1){
// //             printf("*\n");
// //         }
// //         else if(n%2==0){
// //             return 1;
// //         }
// //         else{
// //             top_and_buttom(n);
// //             middle(n);
// //         }
// //     }   
    
// // }



// // #include<stdio.h>
// // #include<math.h>
// // #include<stdlib.h>

// // void PrintSubsets(int subset[], int size){
// //     printf("{");
// //     for (int i = 0; i < size; i++){
// //         if(i>0) printf(",");
// //         printf("%d", subset[i]);
// //     }
// //     printf("}\n");
// // }

// // void GernerateSubsets(int n){
// //     int subset[n];                      //召喚陣列 大小為n
// //     int times = pow(2, n);              //有幾個子集

// //     for(int i = 0 ; i < times ; i++){   
// //         int size = 0;                   //每次刷新
// //         for(int j = 0 ; j < n; j++){    
// //             if(i && (1 << j)){
// //                 subset[size++] = j+1;
// //             }
// //         }
// //         PrintSubsets(subset, size);     
// //     }
// // }

// // int main(){   
// //     int n;
// //     scanf("%d", &n);

// //     GernerateSubsets(n);

// //     return 0;
// // }














// //function  函數
// //arguments 引數
// //parameter 參數

// // #include<stdio.h>
// // #include<stdlib.h>
// // #include<math.h>



// // void birthday(char name[], int age) //須講好資料型態
// // {
// //     printf("Happy Birthday to you %s.\n",name);
// //     printf("You are %d years old.\n", age);

// // }

// // int main()
// // {   
// //     char name[] = "Richard";
// //     int age = 20;

// //     birthday(name, age);

// // }
// // #include<stdio.h>

// // int cnt = 0;










// // //switch
// // #include<stdio.h>
// // #include<stdlib.h>

// // int main(){
// //     char grade;
// //     scanf("%c", &grade);
// //     switch (grade)
// //     {
// //     case 'A':

// //         break;
// //     case 'B':

// //         break;

// //     case 'C':

// //         break;

// //     default:
// //         break;
// //     }
// // }










// // #include<stdio.h>
// // #include<math.h>
// // const float PI = 3.14159;

// // int main(){
// //     float r, angle;
// //     float area(float r , float angle){ 
// //         return pow(r, 2) * PI * angle / 360;
// //         }

// //     float circumference(float r , float angle){
// //         if (angle != 360) 
// //             return 2 * (PI *r + r)(angle / 360);
// //         else 
// //             return 2 * (PI *r);
// //         }

// //     printf("Enter the radius of the sector.");
// //     scanf("%f", &r);
// //     printf("Enter the angle of the sector.");
// //     scanf("%f", &angle);
    
// //     printf("The aera of the sector is %f\nThe circumference is %f", area(r, angle) ,circumference(r , angle));

// // }
// // #include <stdio.h>
// // #include <math.h>

// // const float PI = 3.14159;

// // // 定義計算扇形面積的函數
// // float area(float r, float angle) {
// //     return pow(r, 2) * PI * angle / 360;
// // }

// // // 定義計算扇形周長的函數
// // float circumference(float r, float angle) {
// //     if (angle != 360) 
// //         return 2 * PI * r * (angle / 360) + 2 * r;
// //     else 
// //         return 2 * PI * r;
// // }

// // int main() {
// //     float r, angle;

// //     // 提示用戶輸入扇形半徑
// //     printf("Enter the radius of the sector: ");
// //     scanf("%f", &r);

// //     // 提示用戶輸入扇形角度
// //     printf("Enter the angle of the sector: ");
// //     scanf("%f", &angle);

// //     // 輸出扇形面積和周長
// //     printf("The area of the sector is %f\nThe circumference is %f\n", area(r, angle), circumference(r, angle));

// //     return 0;
// // }


// // #include<stdio.h>

// // int main(){
// // int x;
// // int number, sum, ISN, ILN;//the_index_of_smallest_number the index of the largest number
// // int VSN = 9999999;         //the value of the smallest number
// // int VLN = -9999999;        //the value of the largest number
// //     while(scanf("%d",&x) == 1) {
// //         number++;
        
// //         if (x > VLN){
// //             VLN = x;
// //             ILN++;
// //         }
// //         else if(x < VSN){
// //             VSN = x;
// //             ISN++;
// //         }  
// //         sum += x;      
// //     }
// //     printf("number:%d\nsum:%d\nthe index of the smallest number:%d\nthe value of the smallest number:%d\nthe index of the largest number:%d\nthe value of the largest number:%d\n",number, sum, ISN, VSN, ILN, VLN);
// //     return 0;
// // }








// // // #include<stdio.h>
// // // #include<math.h>

// // // int main(){
// // //     int a,c;
// // //     scanf("%d %d",&a ,&c);
// // //     if (c == 0){
// // //         printf("sum:%d\nproduct:%d\ndifference:%d\nquotient:invalid\nremainder:invalid\n", a+c, a*c , abs(a-c));
// // //         return 1;
// // //     }
// // //     printf("sum:%d\nproduct:%d\ndifference:%d\nquotient:%d\nremainder:%d\n", a+c, a*c , abs(a-c), a/c, a - (a/c)*c );
// // //     return 0;
// // // }







// // // #include<stdio.h>
// // // #include<math.h>

// // // int year;
// // // int isLeapYear(int year){
// // //     return(year % 4);
// // // }

// // // int main(){
// // //     while(scanf("%d", &year) != EOF){
// // //         if ((isLeapYear(year) == 0 && year % 100 != 0 ) || year % 400 == 0 ){
// // //             printf("1\n");
// // //         }
// // //         else{
// // //             printf("0\n");
// // //         }
// // //     }    
// // // }








// // // #include<stdio.h>
// // // #include<math.h>

// // // double weight, height;
// // // double calculateBMI(double height, double weight){
// // //     return (weight / (height * height) *10000.0);
// // //     }

// // // int main(){
// // //     while (scanf("%lf %lf", &height, &weight) != EOF){
// // //         if (weight <= 0 || height <= 0){
// // //             printf("Ivalid");
// // //             continue;
// // //         }

// // //         printf("%lf\n", calculateBMI(height, weight));
// // //     }


// // // }










// // // #include<stdio.h>
// // // #include<math.h>

// // // int calculate(int tea, int coffee, int bag) {
// // //     // 這裡可以加入計算價格的邏輯
// // //     return (tea * 50 + coffee * 45 + bag * 1);  // 假設每個物品有相應的價格
// // // }

// // // int main(){
// // //     int tea, coffee, bag, price;
    
// // //     while (scanf("%d %d %d", &tea, &coffee, &bag) != EOF) {
// // //         if (tea < 0 || coffee < 0 || bag < 0) {  // 修正條件語法
// // //             price = -1; // 表示無效輸入
// // //             printf(" %d元\n", price);
// // //             continue;  // 繼續下一次迴圈，而不是結束程式
// // //         }
// // //         price = calculate(tea, coffee, bag);  // 計算價格
// // //         printf(" %d元\n", price);
// // //     }

// // //     return 0;  // 正常結束程式
// // // }









// // // #include<stdio.h>
// // // int main()
// // // {   
// // //     int x;
// // //     scanf("%d",&x);
// // //     int a = x / 10000;
// // //     int c = x / 1000 - a * 10;
// // //     int c = x / 100 - a * 100 - c * 10;
// // //     int d = x / 10 - a * 1000 - c * 100 - c * 10;
// // //     int e = x / 1 - a * 10000 - c * 1000 - c * 100 - d * 10;

// // //     printf("a:%d c:%d c:%d d:%d e:%d", a ,c, c ,d ,e);

// // //     for (int i = 0; i < a ; i ++){
// // //         printf("*");
// // //     }
// // //     return 0;
// // // }





// // // #include<stdio.h>

// // // int main(){

// // //     char name[25];
// // //     int age;

// // //     printf("\nWhat's your name?\n");
// // //     scanf("%s", &name);

// // //     printf("How old are you?\n");
// // //     scanf("%d", &age);

// // //     printf("Hello %s, how are you?\n", name);
// // //     printf("You are %d year-old.\n", age);

// // //     return 0;
// // // }