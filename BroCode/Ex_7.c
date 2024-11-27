#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int t, days, parties, frequency[10], total_days[3650];
    scanf("%d", &t);
    // t = 2;

    for(int i=0 ; i<t ; i++){
        int times = 0;
        /*全部關燈*/
        for(int k=0 ; k<3650 ; k++){
            total_days[k] = 0;
        }
        /*掃入測資*/
        scanf("%d %d",&days, &parties);
        for(int p=0 ; p<parties ; p++){
            scanf("%d",&frequency[p+1]); //頻率 party1 ~ partyn
        }

    // days = 14;
    // frequency[0] = 3;
    // frequency[1] = 4;
    // frequency[2] = 8;

        /*根據倍數 開燈*/
        for(int q=0 ; q<parties ; q++){
            for(int h=1 ; frequency[q+1]*h<3650 ; h++){
                total_days[frequency[q+1]*h-1] = 1;
            }
        }
        /*去除星期五 星期六*/
        for(int j=0 ; 5+7*j < days ;j++){
            if(total_days[5+7*j] == 1){
                total_days[5+7*j] = 0;
            }
        }
        for(int m=0 ; 6+7*m < days ;m++){
            if(total_days[6+7*m] == 1){
                total_days[6+7*m] = 0;
            }
        }
        
        /*數有幾盞燈開著*/
        for(int w=0 ; w<days ;w++){
            times += total_days[w];
            
        }
        printf("%d\n",times);
        


    }

    return 0;
    //debug
    // printf("%d %d %d",t, days, parties);
    // for(int p=0 ; p<parties ; p++){
    //         printf("%d",frequency[p+1]);
    //     }
}









// #include<stdio.h>
// int A(int m, int n) {

//     if (m == 0) return n + 1;
//     if (m > 0 && n == 0) return A(m - 1, 1);
//     return A(m - 1, A(m, n - 1));
// }

// int main()
// {
//   printf("%d\n", A(5, 5));
//   return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>
// #include<math.h>

// int main()
// {   
//     //前置作業
//     float a[100];                                        
//     int strike, padding, pool_size; 
     
//     int n = 0;

//     //將全部初始化為極小數字
//     for (int i = 0; i < 100; i++) {
//         a[i] = -999999;
//     }
//     //掃描參數以及陣列內數字
//     scanf("%d %d %d %d", &n, &padding, &pool_size, &strike);

//     for(int i = 0 ; i < n + padding ; i++){   
//         scanf("%f", &a[i + padding]);
//     }

//     //比大小  
    
//     //3.看strike決定一次跳幾格

//     for(int p, index = 0 ; p < padding*2 + n ; p += strike , index++){
//         float biggest = -999999;
        
        
//     }    
    
// }


// #include<stdio.h>
// #include<stdlib.h>
// #include<math.h>

// int main()
// {   
//     //前置作業
//     int a[100];                                        
//     int strike, padding, pool_size; 
     
//     float n = 0;

//     //將全部初始化為極小數字
//     for (int i = 0; i < 100; i++) {
//         a[i] = -999999;
//     }
//     //掃描參數以及陣列內數字
//     scanf("%d %f %d %d", &n, &padding, &pool_size, &strike);
//     for(int i = 0 ; i < n ; i++){   
//         scanf("%f", &a[i + padding]);
//     }

//     //比大小  
    
//     //3.看strike決定一次跳幾格

//     for(int p, index = 0 ; p < padding*2 + n ; p += strike , index++){
//         float biggest = -999999;

//         for(int i = p; i < pool_size ; i++){        // i 看padding找第一項  j 看pool_size決定抓幾項
//             if (a[i] > biggest){biggest = a[i];}
//         }
//         printf("%3d,%8f\n",index ,biggest);         //格式(start from 0) 編號,最大數字
//         int i = i - pool_size + strike;
        
//     }    
    
// }