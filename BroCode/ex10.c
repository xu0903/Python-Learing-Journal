#include<stdio.h>
#include<stdlib.h>

int *read_array(int n)
{
  int *a = (int *) malloc(sizeof(int) * n);    //生法不對 int *p = (int *) malloc(sizeof(int) * 3);
  int *b;
  b = a + n;                                   //位址a-b的數字(n個) 就是一個陣列

  while(b>a) {                                 //倒著印出
    b--;
    scanf("%d",b);
  }
  free(a);                                     //釋放a宣告的記憶體片段
  return a;                     
}

int main()
{
  int n;
  int *a1, *a2;

  scanf("%d",&n);                               
 
  a1 = read_array(n);                          //解釋這段
  a2 = read_array(n);                          //解釋這段

  for(int i = 0; i < n; ++i) {
    printf("%d %d\n",a1[i],a2[i]);             //解釋這段
  }
  

  return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main(){
    char c;
    int SN = 0; //總字數 + space and new line character
    int PM = 0; //punctuation marks
    int NW = 0; //number of words 遇到字元需連續判斷


    int check = 0;
    while ((c = getchar()) != EOF)
    {   
        char set[] = {',', '.', '\'', '"', '?', '!', '(',
                ')', '{', '}',  '[', ']', ';', ':'};

        SN++;
        
        if(check == 1){   //上次是字母 遇到不是字母判斷一次
            if(!isalpha(c)){
                NW++;
            }
        }

        if(isalpha(c)){
            check = 1;
        }
        else{check = 0;}
        for(int i=0 ; i<14 ; i++){
            if(c == set[i]){
                PM++;  
            }
        }
        


        
        // else if(isspace(c) || c == "\n"){
        // }aa
    }
    if(check==1){
        NW++;
    }


    printf("%d\n%d\n%d\n",SN, PM, NW);
    return 0;
    
}

//gcc .\ex10.c -o ex10