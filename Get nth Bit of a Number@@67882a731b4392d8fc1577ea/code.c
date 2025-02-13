#include <stdio.h>
int main(){
    int intrger1,integer2;
    scanf("%d %d",&integer1,&integer2);
    int bit_value=(integer1>>integer2)&1;
    printf("%d",bit_value);
    return 0;
}