#include <stdio.h>

int main(){
    int a, b;
    while(1){
        scanf("%d %d", &a, &b);
        if(a<0 || b<0 || a>10 || b>10){
            continue;
        }
        else{
            break;
        }
    }
    printf("%d", (a+b));
}