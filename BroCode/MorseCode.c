#include<stdio.h>
#include<string.h>
#include<ctype.h>

void morse(char){

}

int main()
{
    char b0,b1;
    int i = 0;
    while((b1 = getchar())!=EOF) {
        if (isalnum(b1)){
            if(i>0 && isalnum(b0)){
                printf(" ");            //字母間空1格
            }       
            morse(b1);
        } else if (b1 == ' ') {
            printf("       ");          //單字間空7格
        }
        b0=b1;
        i = 1;
    }
    printf("\n");
    return 0;
}