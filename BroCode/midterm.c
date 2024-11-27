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
    int a[9999999];
    for(int i = 0 ; i < 999999999 ; i++){
        a[i] = 0;
    }   
    long long unsigned r = f(21);

    printf("%llu\n",r);
    printf("f(n)被呼叫次數: %d\nf(10)被呼叫次數: %d", times, times_10);
    

    return 0;
}
