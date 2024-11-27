#include <stdio.h>
#include <math.h>
#include <float.h>

int max_of_four(int a, int b, int c, int d){
    int k[4] = {a, b, c, d};
    int largest = -FLT_MAX;

    for (int i = 0; i < 4 ; i++){
        if (k[i] > largest){
            largest = k[i];
        }   
    }
    return largest;
    }

int main(){
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}