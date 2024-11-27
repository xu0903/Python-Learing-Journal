// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     int c;              //幾個case
//     int cost[36];       //用陣列存花費金額
//     int i;              //讀個數(for幾次)
//     long long int loong;//讀大數
    
//     scanf("%d", &c);
//     for (int j = 1 ; j <= c ; j++)      //幾個case
//     {   
//         int h = c - 1;                  //兩case間的換行

//         for (int q = 0 ; q < 36 ; q++)  //用陣列存花費金額
//         {
//             scanf("%d", &cost[q]);
//         }
        
//         scanf("%d", &i);                //讀個數(for幾次)
        
//         printf("Case %d:\n", j);
        
//         for(int p = 0 ; p < i ; p++)    //讀大數
//         {
//             int ans[36];                //用陣列存答案
            
//             scanf("%lld", &loong);
//             int cnt = 0;
//             int cheapest = 2000000000;  //找最便宜

//             for(int low = 2; low <= 36 ; low++)
//             {   
//                 int y = loong;
//                 int total = 0;
                
//                 while (y != 0)
//                     {
//                         total += cost[y % low];//抓末位數字
//                         y /= low;
//                     }
//                     if (total < cheapest)
//                     {
//                         cheapest = total;
//                         cnt = 1;
//                         ans[0] = low;
//                     }
//                     else if(total == cheapest){
//                         ans[cnt] = low;
//                         cnt ++;
//                     }
//             }
//             printf("Cheapest base(s)for number %lld:", loong);
//             for (int r = 0; r < cnt ; r++ )
//             {
//                 printf(" %d", ans[r]);
//             }
//             printf("\n");
//         }
//         if (h != 0)
//         {
//             printf("\n");
//         }

//     } 
// }



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





// #include<stdio.h>
// void score(const char p[], const char y[], int n, double*sensitivity, double* specificity);
// int main()
// {
//      char p[1000];
//      char y[1000];
//      int a,b,i,n;
//      double sensitivity,specificity;
//      n=0;
//      while(scanf("%d%d",&a,&b)!=EOF) {
//              p[n]=a;
//              y[n]=b;
//              n++;
//      }
//      score(p, y, n,&sensitivity,&specificity);
//      printf("%.2lf\n",sensitivity);    
//      printf("%.2lf\n",specificity);    
//      return 0;
// }