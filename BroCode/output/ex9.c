#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*  %x %o

   This program reads three integer numbers and outputs the largest one.  
   You should correct the following two functions: 
               largest_version1 and largest_version2 
   to make the integer pointer largestPtr correctly  point to the largest among num1, num2, and num3. 

*/
void largest_version1(int** largest, int* x, int* y, int* z) // largest 0x4 *largest 0x4值
{
     if(*x>=*y) {
        *largest = (*x>=*z)? x :z;
     } else {
        *largest = (*y>=*z)? y : z;
     }

     x = y = z;
     return;
}
int* largest_version2(int* x, int* y, int* z)
{
       if(*x>=*y) {
         return (*x>=*z)? x : z;
       } else {
         return (*y>=*z)? y : z;
       } 
}
void foo(int a,int b,int c)

{

      return;

}
int main()
{
   int num1,num2,num3; 
    // num1 = 1;
    // num2 = 3;
    // num3 = -1;
   int* largestPtr=NULL;
   scanf("%d%d%d",&num1,&num2,&num3);
    

   largest_version1(&largestPtr,&num1,&num2,&num3);  //參數可改

   foo(num3,num2,num1);
   if (largestPtr==&num1 || largestPtr==&num2|| largestPtr==&num3){
         printf("The largest number is %d.\n", *largestPtr);  
   }
   largestPtr = largest_version2(&num1,&num2,&num3);   //參數可改
   foo(num3,num2,num1);
   if (largestPtr==&num1 || largestPtr==&num2|| largestPtr==&num3){
         printf("The largest number is %d.\n", *largestPtr);  
   }
//    printf("%d\n%d\n%d",num1, num2, num3);
   return 0; 
} 
   

   







// #define _CRT_SECURE_NO_WARNINGS
// #include<stdio.h>
// /* 

//    This program reads three integer numbers and outputs the largest one.  
//    You should correct the following two functions: 
//                largest_version1 and largest_version2 
//    to make the integer pointer largestPtr correctly  point to the largest among num1, num2, and num3. 

// */
// void largest_version1(int* largest, int x, int y, int z)
// {
//      if(x>=y) {
//         largest = (x>=z)? &x : &z;
//      } else {
//         largest = (y>=z)? &y : &z;
//      }

//      x = y = z;
//      return;
// }
// int* largest_version2(int x, int y, int z)
// {
//        if(x>=y) {
//          return (x>=z)? &x : &z;
//        } else {
//          return (y>=z) ? &y : &z;
//        } 
// }
// void foo(int a,int b,int c)

// {

//       return;

// }
// int main()
// {
//    int num1= 0 ,num2 = 1,num3 =3;
//    int*p1,*p2,*p3 = num1, num2, num3;
//    int** largestPtr=&p1;
// //    scanf("%d%d%d",&num1,&num2,&num3);
//    largest_version1(largestPtr,num1,num2,num3); 

//    foo(num3,num2,num1);
//    if (largestPtr==&num1 || largestPtr==&num2|| largestPtr==&num3){
//          printf("The largest number is %d.\n", *largestPtr);  
//    }
//    largestPtr = largest_version2(num1,num2,num3); 
//    foo(num3,num2,num1);
//    if (largestPtr==&num1 || largestPtr==&num2|| largestPtr==&num3){
//          printf("The largest number is %d.\n", *largestPtr);  

//    }

//    printf("%d%d%d",num1 , num2 ,num3);
//    return 0; 
// } 

 