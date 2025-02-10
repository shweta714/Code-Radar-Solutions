#include <stdio.h>
int main(){
    int number;
    scanf("%d",&number);
    int msb = 1<<31;
    if(number & msb){
        printf("Set");
    }else{
        printf("Not Set");
    }
    return 0;
}